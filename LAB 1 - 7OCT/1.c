/*Accept an array of size n from the user. Find the sum of even indices (i.e., 0,2,4….)
and sum of odd indices (1,3,5….) and print the same*/
#include<stdio.h>
int main() {
    int n,sumeven=0,sumodd=0;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(i%2==0)
        sumeven+=a[i];
        else
        sumodd+=a[i];
    }
    printf("Sum of even indices: %d\n",sumeven);
    printf("Sum of odd indices: %d\n",sumodd);
    return 0;
}
