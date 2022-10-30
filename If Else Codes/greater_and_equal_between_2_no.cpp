#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter First Number \n ");
    scanf("%d",&a);
    printf("Enter Second Number \n ");
    scanf("%d",&b);
    if(a==b)
        printf("%d and %d Both Are Equal ",a,b);
    else
    {
        if(a>b)
            printf("a = %d is Greater ",a);
        else
            printf("b = %d is Greater ",b);
    }
    return 0;
}