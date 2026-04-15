a=10
b=15
if [ $a -gt $b ]; then
  echo "$a is largest"
elif [ $a -lt $b ]; then
  echo "$b is largest"
else
  echo "Both are equal"
fi
