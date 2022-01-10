echo "Enter the basic salary"
read s
echo "The gross salary of the employee is :"
echo `expr 1.3*$s`|bc
