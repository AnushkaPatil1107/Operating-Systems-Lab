a=12
b=15

if [ $a -eq $b ]; then
  echo "$a is Equal to $b"
fi

if [ $a -lt $b ]; then
  echo "$a is Less than $b"
fi

if [ $a -gt $b ]; then
  echo "$a is Greater than $b"
fi

if [ $a -le $b ]; then
  echo "$a is Less than or Equal to $b"
fi

if [ $a -ge $b ]; then
  echo "$a is Greater than or Equal to $b"
fi
