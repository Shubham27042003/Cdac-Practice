#!/bin/bash
timestamp=$(date +%Y%m%d%H%M%S)

for file in *.txt; do
	if [ -f "$file" ]; then
		new_name=${file%.txt}_$timestamp.txt
		mv "$file" "$new_name"
		echo "Renamed $file to $new_name"

