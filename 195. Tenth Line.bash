echo -e "Line 1\nLine 2\nLine 3\nLine 4\nLine 5\nLine 6\nLine 7\nLine 8\nLine 9\nLine 10" > file.txt




lines=$(wc -l < file.txt)
if [ "$lines" -lt 10 ]; then
  echo "File has less than 10 lines"
else
  sed -n '10p' file.txt
fi

