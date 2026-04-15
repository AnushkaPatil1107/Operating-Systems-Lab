#!/bin/bash

echo "Select an option:"
echo "1) Check Leap Year"
echo "2) Check Even or Odd"
echo "3) Find Largest of Three Numbers"
read choice

case $choice in
1)
    echo "Enter year:"
    read year
    if (( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )); then
        echo "$year is a Leap Year"
    else
        echo "$year is Not a Leap Year"
    fi
    ;;
2)
    echo "Enter a number:"
    read num
    if (( num % 2 == 0 )); then
        echo "$num is Even"
    else
        echo "$num is Odd"
    fi
    ;;
3)
    echo "Enter first number:"
    read num1
    echo "Enter second number:"
    read num2
    echo "Enter third number:"
    read num3
    if (( num1 >= num2 && num1 >= num3 )); then
        echo "$num1 is the largest"
    elif (( num2 >= num1 && num2 >= num3 )); then
        echo "$num2 is the largest"
    else
        echo "$num3 is the largest"
    fi
    ;;
*)
    echo "Invalid choice"
    ;;
esac
