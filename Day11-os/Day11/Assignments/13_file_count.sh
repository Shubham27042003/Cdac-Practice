#!/bin/bash
directory="$1"
if [ ! -d "$directory" ]; then
	echo "$directory is not a valid directory."
	exit 1
fi

file_count=$(find "$directory" -type f | wc -l)

echo "The number of files in the directory $directory is : $file_count"

