#include<stdio.h>
int main()
{
    int i,j,n,sum,prod;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    i=1;
    sum=0;
    while(i<=n)
    {
        j=1;
        prod=1;
        while(j<=(2*i-1))
        {
            prod=prod*j;
            j++;
        }
        sum=sum+prod;
        i++;
    }
    printf("Sum of Series is %d ",sum);
    return 0;
}