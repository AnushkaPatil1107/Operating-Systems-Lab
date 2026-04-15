a=10
b=25
c=20
if [ $a -ge $b ] && [ $a -ge $c ]; then
  echo "$a is largest"
elif [ $b -ge $c ]; then
  echo "$b is largest"
else
  echo "$c is largest"
fi
