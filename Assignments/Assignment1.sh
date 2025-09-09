<<'theory'
# Linux Basics

1. How would you display the contents of a text file named "example.txt" in the terminal?
   Answer: cat example.txt

2. What command would you use to list all files and directories in the current directory?
   Answer: ls

3. How can you create a new directory named "documents" in the current directory?
   Answer: mkdir documents

4. What command would you use to copy a file named "file1.txt" from the current directory to another directory named "backup"?
   Answer: cp file1.txt backup/

5. How would you navigate to the parent directory of the current directory?
   Answer: cd ..

6. What command would you use to search for the word "apple" in a file named "fruits.txt"?
   Answer: grep apple fruits.txt

7. How can you recursively remove a directory named "old\_files" along with all its contents?
   Answer: rm -r old\_files

8. What command would you use to find out the size of a file named "report.pdf" in kilobytes?
   Answer: du -k report.pdf

9. How can you rename a file named "oldname.txt" to "newname.txt"?
   Answer: mv oldname.txt newname.txt

10. What command would you use to display the last 10 lines of a file named "logfile.txt"?
    Answer: tail logfile.txt

11. How would you create a new user named "john" on the system?
    Answer: sudo adduser john

12. What command would you use to set the password for the user "john"?
    Answer: sudo passwd john

13. How can you remove a user named "alice" from the system, along with their home directory and files?
    Answer: sudo userdel -r alice

14. What command would you use to grant read and write permissions to the owner, and only read permissions to the group and others, for a file named "data.txt"?
    Answer: chmod 644 data.txt

15. How can you change the owner of a directory named "shared" to the user "bob" and the group "staff"?
    Answer: sudo chown bob\:staff shared
theory


#!/usr/bin/env bash
# Sir given trials Check number is greater than 10 or not
<<'comment'
read -p "Enter A Number" num 
if [ "$num" -gt 10 ];
then 
	echo "Number is Greater"
else
	echo "Number is lesser"
fi

comment


# 1) Accept first, middle, last name & greet
<<'comment'
read -p "Enter First Name: " fname
read -p "Enter Middle Name: " mname
read -p "Enter Last Name: " lname
echo "Hello $fname $mname $lname, Have a great day!"
comment

# 2) Print pattern
<<'rows'
row=5
for ((i=1; i<row; i++))
do
  for ((j=1; j<=i; j++))
  do
    echo -n "*"
  done
  echo
done
rows

# 3) Even/Odd Check
<<'evenodd'
read -p "Enter a number: " num
if (( num % 2 == 0 ))
then
  echo "Even"
else
  echo "Odd"
fi
evenodd

# 4) Sum of Numbers 1..n
<<'sum'
read -p "Enter a number: " n
sum=0
for ((i=1; i<=n; i++))
do
  sum=$((sum+i))
done
echo "Sum = $sum"
sum

# 5) Factorial Recursive
<<'fact'
factorial() {
  if [ $1 -le 1 ]; then
    echo 1
  else
    local temp=$(( $1 - 1 ))
    local prev=$(factorial $temp)
    echo $(( $1 * prev ))
  fi
}
read -p "Enter number: " num
result=$(factorial $num)
echo "Factorial = $result"
fact

# 6) Count words in file
<<'countwords'
read -p "Enter filename: " file
wc -w < "$file"
countwords

# 7) Generate random password
<<'passgen'
read -p "Enter length: " len
tr -dc A-Za-z0-9 </dev/urandom | head -c $len ; echo
passgen

# 8) Simple Calculator
<<'calc'
echo "1. Add 2. Sub 3. Mul 4. Div"
read -p "Choose: " ch
read -p "Enter num1: " a
read -p "Enter num2: " b
case $ch in
  1) echo "Sum = $((a+b))" ;;
  2) echo "Diff = $((a-b))" ;;
  3) echo "Mul = $((a*b))" ;;
  4) echo "Div = $((a/b))" ;;
  *) echo "Invalid" ;;
esac
calc

# 9) File Type Check
<<'filecheck'
if [ $# -ne 1 ]; then
  echo "Error: Only one argument allowed"
  exit 1
fi
file "$1"
filecheck

# 10) String Functions
<<'stringlib'
concat() { echo "$1$2"; }
strlen() { echo ${#1}; }
compare() { [ "$1" == "$2" ] && echo "Equal" || echo "Not Equal"; }
ispalindrome() { rev=$(echo $1 | rev); [ "$1" == "$rev" ] && echo "Palindrome" || echo "Not Palindrome"; }
reverse() { echo $1 | rev; }
stringlib

# 11) Student Records Validation
<<'student'
read -p "Enter RollNo: " roll
read -p "Enter Name: " name
read -p "Enter Hindi Marks: " h
read -p "Enter Maths Marks: " m
read -p "Enter Physics Marks: " p
log="log1"
if grep -q "^$roll " student; then
  echo "$roll $name $h $m $p roll number exists" >> $log
elif [ $h -lt 1 -o $h -gt 99 -o $m -lt 1 -o $m -gt 99 -o $p -lt 1 -o $p -gt 99 ]; then
  echo "$roll $name $h $m $p marks out of range" >> $log
else
  total=$((h+m+p))
  per=$((total/3))
  if [ $per -ge 60 ]; then grade="A"
  elif [ $per -ge 40 ]; then grade="B"
  else grade="C"
  fi
  echo "Roll: $roll Name: $name Total: $total %: $per Grade: $grade"
fi
student

# 12) Backup Script
<<'backup'
mkdir -p ~/backup_files
cp * ~/backup_files/
echo "Backup complete!"
backup

# 13) File Count
<<'filecount'
read -p "Enter directory: " dir
count=$(ls -1 "$dir" | wc -l)
echo "File Count: $count"
filecount

# 14) Rename txt files with timestamp
<<'rename'
for f in *.txt
do
  mv "$f" "${f%.txt}_$(date +%s).txt"
done
rename

# 15) Directory Size in MB
<<'dirsize'
read -p "Enter directory: " dir
du -sm "$dir" | awk '{print $1 " MB"}'
dirsize







