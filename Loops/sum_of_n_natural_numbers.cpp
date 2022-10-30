#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    i=1;
    sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum is %d ",sum);
    return 0;
}