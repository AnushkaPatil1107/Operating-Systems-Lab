marks=72
if [ $marks -ge 75 ]; then
  echo "Marks $marks = Distinction"
elif [ $marks -ge 65 ]; then
  echo "Marks $marks = 1st Division"
elif [ $marks -ge 55 ]; then
  echo "Marks $marks = 2nd Division"
else
  echo "Marks $marks = 3rd Division"
fi
