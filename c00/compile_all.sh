find . -name "*.c" -type f | while read -r file; do
    # Extract the directory path from the file
    dir=$(dirname "$file")
    # Change directory to the file's directory
    cd "$dir" || exit
    # Extract the file name without extension
    filename=$(basename "$file" .c)
    # Compile the C file using gcc
    gcc -o "$filename" "$filename.c"
    # Go back to the main directory
    cd - || exit
done
