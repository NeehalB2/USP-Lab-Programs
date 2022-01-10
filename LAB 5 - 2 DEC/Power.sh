echo "Enter the number"
read n
echo "Enter the exponent"
read x
i=1
ans=1
while [ $i -le $x ]
do
	ans=`expr $ans \* $n`
	i=`expr $i + 1`
done
echo "Answer = $ans"
