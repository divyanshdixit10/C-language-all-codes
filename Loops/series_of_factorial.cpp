#include<stdio.h>
int main()
{
    int i,n,prod;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    i=1;
    prod=1;
    while(i<=n)
    {
        prod=prod*i;
        printf("%d \n ",prod);
        i++;
    }
    return 0;
}