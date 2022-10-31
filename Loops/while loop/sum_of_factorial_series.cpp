#include<stdio.h>
int main()
{
    int i,n,prod,sum;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    i=1;
    prod=1;
    sum=0;
    while(i<=n)
    {
        prod=prod*i;
        sum=sum+prod;
        i++;
    }
    printf("Sum Of Factorial Series is %d ",sum);
    return 0;
}