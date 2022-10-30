#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    i=1;
    sum=0;
    while(i<=n)
    {
        if(i%2==0)
            sum=sum-i;
        else
            sum=sum+i;
        i++;
    }
    printf("Sum is %d ",sum);
    return 0;
}