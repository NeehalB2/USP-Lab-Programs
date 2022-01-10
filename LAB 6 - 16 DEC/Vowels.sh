echo "Enter the string"
read str
len=`echo $str | wc -c`
i=1
n=0
while [ $i -le $len ]
do
	v=`echo $str | cut -c $i`
	case "$v" in
		a|A|e|E|i|I|o|O|u|U) n=`expr $n + 1`;;
	esac
	i=`expr $i + 1`
done
echo "Number of vowels: $n"
