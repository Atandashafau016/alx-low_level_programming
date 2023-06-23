#!/bin/bash
c_files=$(find . -maxdepth 1 -type f -name "*.c")
object_files=""
for file in $c_files; do
    object_file="${file%.c}.o"
    gcc -c -fPIC "$file" -o "$object_file"
    object_files+=" $object_file"
done
gcc -shared $object_files -o liball.so
