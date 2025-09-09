<<comments
2. Write a shell script which will generate the O/P as follows

*
**
***
****
comments
pstring=""
for ((i=1;i<=5;i++))
do
    pstring+="*"
    echo "$pstring"
done
