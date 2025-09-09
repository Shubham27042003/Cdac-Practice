#!/bin/bash

myvar="Hello Students, Welcome to CDAC ACTS"

length=${#myvar}

upper=${myvar^^}
lower=${myvar,,}

echo "$myvar"
echo "$length"
echo "$upper"
echo "$lower"

#reverse string
name="acts"
echo $name |rev

