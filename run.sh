#!/bin/bash

# Define the function to compile and run the C++ file
run() {
    # Check if a file name is provided as an argument
    if [ $# -ne 1 ]; then
        echo "Invalid number of arguments."
        echo "Usage: run <input_file.cpp>"
        return 1
    fi

    # Get the input file name
    local input_file=$1

    # Check if the input file exists and is a .cpp file
    if [[ ! -f "$input_file" || "${input_file##*.}" != "cpp" ]]; then
        echo "Input file is either not found or not a .cpp file."
        echo "Usage: run <input_file.cpp>"
        return 1
    fi

    # Extract the base name (file name without extension)
    local base_name=$(basename "$input_file" .cpp)

    # Compile the C++ code
    g++ -Wall -o "$base_name" "$input_file"

    # Check if the compilation was successful
    if [ $? -eq 0 ]; then
        echo "Compilation successful. Executable created: $base_name"

        # Make the executable file executable
        chmod +x "$base_name"

        echo "Running the executable:"
        echo "-----------------------"
        ./"$base_name"
    else
        echo "Compilation failed."
        return 1
    fi
}

# Check if the script is being sourced or executed
if [[ "${BASH_SOURCE[0]}" == "${0}" ]]; then
    echo "This script must be sourced to define the 'run' function."
    echo "Usage: source ./compile_and_run.sh"
    exit 1
fi
