#include<stdio.h>
int main()
{
    int n,m,r,k,sum;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    sum=0;
    m=n;
    while(n>0)
    {
        r=n%10;
        k=r*r*r;
        sum=sum+k;
        n=n/10;
    }
    if(m==sum)
        printf("%d is Armstrong Number ",m);
    else
        printf("%d is Not Armstrong Number ",m);
    return 0;
}