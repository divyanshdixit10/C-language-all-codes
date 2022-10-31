#include<stdio.h>
int main()
{
    int i,x,y,prod;
    printf("Enter The Base \n ");
    scanf("%d",&x);
    printf("Enter The Power \n ");
    scanf("%d",&y);
    prod=i=1;
    while(i<=y)
    {
        prod=prod*x;
        i++;
    }
    printf("%d to The Power %d is %d ",x,y,prod);
    return 0;
}