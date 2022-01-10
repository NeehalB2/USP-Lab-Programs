echo "Enter the number of elements"
read n
i=1
sum=0
while [ $i -le $n ]
do
	echo "Enter number $i:"
	read num
	sum=`expr $sum + $num`
	i=`expr $i + 1`
done
echo "Sum = $sum"
