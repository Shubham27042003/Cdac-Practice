#!/bin/bash

function myfun1 {
	echo "This is myfun1"
}

myfun1

#another way to declare functio
myfun2() {
	echo "This is fun2"
}

myfun2

sum() {
	sum=$(($1+$2))
	echo "$sum"
}

sum 5 8




