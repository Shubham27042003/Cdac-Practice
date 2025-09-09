<<comments
4. Write a shell script named `sum_numbers.sh` that takes a number as input and calculates the sum of all numbers from 1 to that number.
comments

echo "Enter a number : "
read num;

var_1=0

for((i=1;i<=num;i++))
do 
    var_1=$(($var_1+$i))
done

echo "Sum of numbers fro 1 to $num is : $var_1"
