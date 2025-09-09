#!/bin/bash
<<comments
6. Write a shell script named `count_words.sh` that takes a filename as input and counts the number of words in that file.
comments

read -p  "Enter file name" filename

words=$(wc -w < $filename.txt)

echo "Total number of words are $words"
