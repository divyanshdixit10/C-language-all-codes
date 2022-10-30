#include<stdio.h>
int main()
{
    int a;
    float b,div;
    printf("Enter First Number \n");
    scanf("%d",&a);
    printf("Enter Second Number \n");
    scanf("%f",&b);
    div=a/b;
    printf("Division Of \n %d / %0.0f = %f ",a,b,div);
    return 0;
}