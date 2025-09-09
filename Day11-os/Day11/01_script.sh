#!/bin/bash

echo "Hello World"

# single line comment

<<comments
tis is multiline comments
comments

var_1=1
var_2=2
echo "$var_1 $var_2"

<<cmt
echo "What is your name"
read name

echo "What is your friends name"
read name_1

echo "hi $name, your friend is $name_1"

#echo "your age"
#read age 

echo "your are  $age yr old."

read -p "your age" age1

echo "Hi $name, your age is $age1"
cmt
#arithmatic operations

num1=10
num2=20

let sum=$num1+$num2

sum2=$((num1+num2))

echo "sum is: $sum"
echo "sum is : $sum2"

myarray=(1 2 HELLO "hello All")

echo "${myarray[0]}"
echo "${myarray[1]}"

echo "lenth: ${#myarray[*]}"

echo "${myarray[*]:1}" #print elements of array fro inex 1
echo "${myarray[*]:1:2}"

myarray+=(5 6 7)

echo "length_1 : ${#myarray[*]}"
echo "${myarray[*]}"

#if else

read -p "Enter a Number: "num

if [ $num -gt 10 ]
then
	echo "Number is greater than 10"
else
	echo "Number is less than 10"
fi

if [ $num -gt 10 ]
then
	echo "Num> 10"
elif [ $num -eq 10 ]
then 
	echo "Num=10"
else
	echo "Num<10"  #echo -n "" : print on same line
fi


echo "hi choose option"
echo "a = to see current date"
echo "b = list all the files in current dirr"
echo "c = ls -l"
read choice

case $choice in
	a)date;;
	b)ls;;
	c)
		echo "c input given"
		ls -l
		echo "exit"
		;;
	*)echo "Not a valid input"
esac

#for loop

#loop from 1 to 5

for i in 2 4 6 8 10
do
	echo "No. is :$i"
done

for j in "cdac acts" pashan panchwati pune
do
	echo "$j"
done

for k in {1..5}
do
	echo "$k"
done

for ((i=1;i<=5;i++))
do
	echo "No: $i"
done


#while loop

number=0

while [$number -le 0 ]
do
	echo "Enter a positive number"
	read number
done
