import os
import shutil
import urllib.parse

ignition_fuel_path = '/home/home/.ignition/fuel/fuel.gazebosim.org/openrobotics/models'
gazebo_models_path = '/home/home/.gazebo/models'

if not os.path.exists(ignition_fuel_path):
    print(f"Ignition Fuel path not found: {ignition_fuel_path}")
    exit(1)

if not os.path.exists(gazebo_models_path):
    os.makedirs(gazebo_models_path)

print(f"Scanning {ignition_fuel_path}...")

count = 0
for model_dir_name in os.listdir(ignition_fuel_path):
    model_path = os.path.join(ignition_fuel_path, model_dir_name)
    if not os.path.isdir(model_path):
        continue

    # Decode name (e.g. cafe%20table -> cafe table)
    # The directory name in ignition might be url encoded, but Gazebo classic expects standard names?
    # Actually, if the world file uses `model://Cafe table`, it expects `Cafe table` directory.
    # Ignition likely stores it as `cafe%20table` (lowercase, encoded).
    # We should normalize the name. 
    # Let's verify what `model.config` says inside.
    
    # Find versions
    versions = []
    for v in os.listdir(model_path):
        if v.isdigit():
            versions.append(int(v))
    
    if not versions:
        continue
        
    latest_version = max(versions)
    src_path = os.path.join(model_path, str(latest_version))
    
    # Target name. Decoded.
    # Also Ignition converts to lowercase?
    # Let's check model.config name <name>...</name>
    model_config_path = os.path.join(src_path, 'model.config')
    final_name = urllib.parse.unquote(model_dir_name) # default fallback
    
    if os.path.exists(model_config_path):
        with open(model_config_path, 'r') as f:
            for line in f:
                if '<name>' in line:
                    # Extract name
                    try:
                        final_name = line.split('<name>')[1].split('</name>')[0].strip()
                        break
                    except IndexError:
                        pass
    
    # Case sensitivity issue: Gazebo world might say "Cafe table", config says "Cafe table".
    # We should use the name from model.config.
    
    dest_path = os.path.join(gazebo_models_path, final_name)
    
    if os.path.exists(dest_path):
        print(f"Skipping {final_name} (already exists)")
        continue
    
    print(f"Copying {final_name} (v{latest_version}) to {dest_path}")
    try:
        shutil.copytree(src_path, dest_path)
        count += 1
    except Exception as e:
        print(f"Error copying {final_name}: {e}")

print(f"Finished. Cached {count} models.")
