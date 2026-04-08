echo "Enter a number:"
read num

i=2
flag=0

while [ $i -le $((num / 2)) ]
do
  if [ $((num % i)) -eq 0 ]
  then
    flag=1
    break
  fi
  ((i++))
done

if [ $num -le 1 ]
then
  echo "Not Prime"
elif [ $flag -eq 0 ]
then
  echo "Prime Number"
else
  echo "Not Prime"
fi
