import re

path = '/home/home/ros2_ws/src/RCI_quadruped_robot_navigation/rl_sar/worlds/hotel.world'
out_path = '/home/home/ros2_ws/src/RCI_quadruped_robot_navigation/rl_sar/worlds/hotel.world'

with open(path, 'r') as f:
    lines = f.readlines()

models_to_remove = [
    'CoffeeTable', 'NormalBed', 'WoodenChair', 'Chair', 
    'Shower', 'BathroomSink', 'Toilet'
]

# Regex to check if a line mentions these models (ignoring case or specific suffix if needed, but XML names usually match)
# <model name="OpenRobotics/NormalBed" />
# <name>OpenRobotics/NormalBed</name>
# But we need to be careful with "DeskChair" vs "Chair". The user said "Chair". DeskChair contains "Chair".
# I'll check strict prefix match of the model type part?
# The names are like "OpenRobotics/NormalBed_18" or "OpenRobotics/Chair_12".
# "DeskChair" is distinct from "Chair".
# "WoodenChair" is distinct from "Chair".
# But "Chair_12" is a "Chair".
# Let's filter if the *base name* (before _) is in the list.
# Actually, strict contains check might remove "DeskChair" if I remove "Chair".
# The user listed "WoodenChair" and "Chair" separately. This suggests "DeskChair" might be intended to stay if not listed.
# "Chair" removal should target "OpenRobotics/Chair" and "OpenRobotics/Chair_N".
# It should NOT target "DeskChair".
# So I'll check "OpenRobotics/NAME" where NAME startswith TARGET followed by optional `_`.

new_lines = []
skip_block = False
skip_indent = -1

for i, line in enumerate(lines):
    # 1. Handle <include> blocks
    if '<include>' in line:
        # Look ahead for <name> to decide if we skip this block
        # We can't easily look ahead in a single pass without buffering.
        # But wait, <include> block structure:
        # <include>
        #   <name>...</name>
        #   ...
        # </include>
        # I'll process lines. If I start an include, I buffer it. 
        # Actually, simpler: load whole file string? 4k lines, easy.
        pass

# Let's rewrite using string processing on the content
with open(path, 'r') as f:
    content = f.read()

# Function to decide if a model name should be removed
def should_remove(name):
    # name example: "OpenRobotics/NormalBed_18" or "NormalBed"
    # Extract the part after "OpenRobotics/" if present
    if "OpenRobotics/" in name:
        name = name.split("OpenRobotics/")[1]
    
    # Check each target
    for target in models_to_remove:
        # Match "Target" or "Target_..."
        # Avoid matching "DeskChair" when target is "Chair"
        if name == target or name.startswith(target + '_'):
            return True
    return False

# 1. Remove single line <model name="..." /> inside plugins
# Regex: <model name="([^"]+)"\s*/>
def remove_simple_ref(match):
    name = match.group(1)
    if should_remove(name):
        return "" # Remove line
    return match.group(0)

content = re.sub(r'\s*<model name="([^"]+)"\s*/>\n', remove_simple_ref, content)

# 2. Remove <include> ... </include> blocks
# Regex is tricky for nested tags, but <include> usually doesn't nest other includes.
# include pattern: <include>.*?<name>([^<]+)</name>.*?</include>
# We use DOTALL = re.S

def remove_include_block(match):
    block = match.group(0)
    # Extract name
    m_name = re.search(r'<name>([^<]+)</name>', block)
    if m_name:
        name = m_name.group(1)
        if should_remove(name):
            return "" # Remove block via replacing with empty string
    return block

# This regex matches <include> followed by anything until </include>
# Non-greedy .*?
content = re.sub(r'<include>.*?</include>', remove_include_block, content, flags=re.S)

# Clean up extra newlines? Maybe not strictly necessary but nice.
content = re.sub(r'\n\s*\n\s*\n', '\n\n', content)

with open(out_path, 'w') as f:
    f.write(content)

print("Done")
