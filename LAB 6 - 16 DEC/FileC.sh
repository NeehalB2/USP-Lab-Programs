echo "Enter file name"
read fname
c=0
l=0
w=0
if [ -r $fname ]
then
	echo "Character count : `wc -c $fname | cut -d " " -f1`"
	echo "Word count : `wc -w $fname | cut -d " " -f1`"
	echo "Line count : `wc -l $fname | cut -d " " -f1`"
else
	echo "File does not exist"
fi
