<<comments
3. Write a shell script named `even_odd.sh` that takes a number as input and prints whether it is even or odd.
comments

echo "Enter a number: "
read n;

if ((n%2==0))
then
    echo "$n is a even number."
else
    echo "$n is a odd number"
fi
