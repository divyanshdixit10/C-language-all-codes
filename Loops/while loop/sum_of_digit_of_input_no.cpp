#include<stdio.h>
int main()
{
    int n,r,sum;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    sum=0;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("Sum Of Digits is %d ",sum);
    return 0;
}