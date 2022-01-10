echo "Enter a number"
read n
so=0
se=0
i=1
while [ $i -le $n ]
do
	so=`expr $i + $so`
	i=`expr $i + 1`
	se=`expr $i + $se`
	i=`expr $i + 1`
done
echo "Sum of odd numbers upto n : $so"
echo "Sum of even numbers upto n : $se"
