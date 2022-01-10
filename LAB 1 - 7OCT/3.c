/*Consider a super market bill. Accept a double array holding rate per item of say x
items and an int array showing the quantity purchased by a customer. Calculate the
total bill amount and the final bill amount after giving discounts as per the following
slabs.
If the total bill amount &gt;=10000, discount=5%
If the total bill amount &gt;=7500 and &lt;10000, discount=3%
If the total bill amount &gt;=5000, discount=2% */
#include<stdio.h>
int main(){
    int n; double sum=0.0;
    printf("Enter the number of items purchased:\n");
    scanf("%d",&n);
    double rate[n];
    int q[n];
    for(int i=0;i<n;i++) {
        printf("Enter the rate and quantity of item %d: ",(i+1));
        scanf("%lf %d",&rate[i],&q[i]);
    }
    for(int i=0;i<n;i++) {
        sum=sum+rate[i]*q[i];
    }
    double tb=sum;
    if(sum>=10000)
    tb=sum-0.05*sum;
    else if(sum>=7500)
    tb=sum-0.03*sum;
    else if(sum>=5000)
    tb=sum-0.02*sum;
    printf("Total bill: %lf\n",sum);
    printf("Final bill after discount: %lf\n",tb);
    return 0;
}
