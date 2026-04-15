#!/bin/bash
echo "Enter first number:"
read num1
echo "Enter second number:"
read num2

echo "Select an operation:"
echo "1) Addition"
echo "2) Subtraction"
echo "3) Multiplication"
echo "4) Division"
read choice

case $choice in
1)
    echo "Result: $((num1 + num2))"
    ;;
2)
    echo "Result: $((num1 - num2))"
    ;;
3)
    echo "Result: $((num1 * num2))"
    ;;
4)
    if [ $num2 -ne 0 ]; then
        echo "Result: $((num1 / num2))"
    else
        echo "Division by zero error"
    fi
    ;;
*)
    echo "Invalid choice"
    ;;
esac
