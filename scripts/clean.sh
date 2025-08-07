#!/bin/zsh
set -euo pipefail  # Enable strict error checking

# Script directory
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" &> /dev/null && pwd)"

# Function to show usage
show_usage() {
    echo "Usage: $0 [directory]"
    echo "  directory: Optional. Directory to clean (default: atCoder)"
    exit 1
}

# Function to check if a file is an executable
is_executable() {
    local file="$1"
    # Check if file exists and has execute permission
    if [ ! -f "$file" ] || [ ! -x "$file" ]; then
        return 1
    fi
    # Check if it's not a .cpp file
    if [[ "$file" == *.cpp ]]; then
        return 1
    fi
    # Check if it's a binary file
    if file "$file" | grep -q "executable"; then
        return 0
    fi
    return 1
}

# Process command line arguments
target_dir="atCoder"
if [ $# -gt 0 ]; then
    if [ "$1" = "-h" ] || [ "$1" = "--help" ]; then
        show_usage
    fi
    target_dir="$1"
fi

# Create absolute path
target_dir_abs="$(cd "${SCRIPT_DIR}" && realpath "${target_dir}")"

# Check if directory exists
if [ ! -d "${target_dir_abs}" ]; then
    echo "Error: Directory '${target_dir_abs}' does not exist"
    exit 1
fi

# First, find and list all executables
executables=()
while IFS= read -r cpp_file; do
    dir_path="$(dirname "${cpp_file}")"
    base_name="$(basename "${cpp_file}" .cpp)"
    executable_path="${dir_path}/${base_name}"
    
    if is_executable "${executable_path}"; then
        executables+=("${executable_path}")
    fi
done < <(find "${target_dir_abs}" -name "*.cpp" -type f)

# If no executables found, exit
if [ ${#executables[@]} -eq 0 ]; then
    echo "No executable files found in ${target_dir} directory."
    exit 0
fi

# Show files to be deleted
echo "The following executable files will be removed:"
for executable in "${executables[@]}"; do
    echo "  ${executable}"
done

# Ask for confirmation
echo -n "Do you want to proceed? [y/N] "
read -r answer

if [[ "${answer}" =~ ^[Yy]$ ]]; then
    # Remove the files
    for executable in "${executables[@]}"; do
        if [ -f "${executable}" ]; then  # Double check file still exists
            rm -- "${executable}"
            echo "Removed: ${executable}"
        fi
    done
    echo "All executable files have been removed from ${target_dir} directory."
else
    echo "Operation cancelled."
fi
