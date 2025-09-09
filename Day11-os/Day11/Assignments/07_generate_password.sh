#!/bin/bash

<<comments
7. Write a shell script named `generate_password.sh` that takes a length as input and generates a random password of that length.
comments

echo "Enter the password length"
read length
password=$(< /dev/urandom tr -dc 'A-Za-z0-9' | head -c $length)
echo "your generated password is: $password"
