
year=2024
if [ $((year % 4)) -eq 0 ] && [ $((year % 100)) -ne 0 ] || [ $((year % 400)) -eq 0 ]; then
    echo "$year is a leap Year"
else
    echo "$year is not a leap Year"
fi
