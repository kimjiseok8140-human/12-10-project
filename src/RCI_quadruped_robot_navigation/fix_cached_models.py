import os
import re

gazebo_models_path = '/home/home/.gazebo/models'

print(f"Scanning {gazebo_models_path}...")

count = 0
for model_dir_name in os.listdir(gazebo_models_path):
    model_path = os.path.join(gazebo_models_path, model_dir_name)
    if not os.path.isdir(model_path):
        continue
        
    sdf_path = os.path.join(model_path, 'model.sdf')
    if not os.path.exists(sdf_path):
        continue
        
    with open(sdf_path, 'r') as f:
        content = f.read()
    
    # Regex to find https://fuel.gazebosim.org/.../files/(...)
    # We want to replace it with model://model_dir_name/...
    
    # Pattern: <uri>https://fuel.gazebosim.org/.*?/files/(.*?)</uri>
    # Replacement: <uri>model://model_dir_name/\1</uri>
    
    def replacement(match):
        relative_path = match.group(1)
        # Note: model_dir_name is the folder name in .gazebo/models
        return f'<uri>model://{model_dir_name}/{relative_path}</uri>'
    
    new_content, n = re.subn(r'<uri>https://fuel\.gazebosim\.org/[^<]+?/files/([^<]+)</uri>', replacement, content)
    
    if n > 0:
        print(f"Fixed {n} URLs in {model_dir_name}")
        with open(sdf_path, 'w') as f:
            f.write(new_content)
        count += 1

print(f"Finished. Updated {count} models.")
