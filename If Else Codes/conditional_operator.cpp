#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter First Number \n ");
    scanf("%d",&a);
    printf("Enter Second Number \n ");
    scanf("%d",&b);
    (a>b?printf("a = %d is Greater ",a):printf("b = %d is Greater ",b));
    return 0;
}