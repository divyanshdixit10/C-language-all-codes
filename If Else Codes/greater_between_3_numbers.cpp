#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter First Number \n ");
    scanf("%d",&a);
    printf("Enter Second Number \n ");
    scanf("%d",&b);
    printf("Enter Third Number \n ");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
            printf("a = %d is Greater ",a);
        else
            printf("c = %d is Greater ",c);
    }
    else
    {
        if(b>c)
            printf("b = %d is Greater ",b);
        else
            printf("c = %d is Greater ",c);
    }
    return 0;
}