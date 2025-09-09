#!/bin/bash

<<comments
5. Write a shell script named `factorial_recursive.sh` that takes a number as input and calculates its factorial using recursion.
comments

fact=1
factorial(){
	if [ $1 -eq 0]
	then
		echo 1
	else
		fact=$(( $1 * $(factorial $(( $1-1 )) ) ))
		echo $fact
	fi
}
echo "Enter number :"
read num;

result=$(factorial $num)
echo "Factorial is $result"

