#include<stdio.h>
int main()
{
    int n,x,i,sum,j,prod,pow,k;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    printf("Enter The Number \n ");
    scanf("%d",&x);
    i=1;
    sum=0;
    while(i<=n)
    {
        pow=prod=j=1;
        while(j<=(2*i-1))
        {
            pow=pow*x;
            prod=prod*j;
            j++;
        }
        k=pow/prod;
        if(i%2==0)
            sum=sum-k;
        else
            sum=sum+k;
        i++;
    }
    printf("Sum Of Series is %d ",sum);
    return 0;
}