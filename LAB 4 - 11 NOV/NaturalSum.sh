echo "Enter a number"
read n
sum=0
while [ $n -ge 1 ]
do
	sum=`expr $sum + $n`
	n=`expr $n - 1`
done
echo "Sum of natural numbers is: $sum"
