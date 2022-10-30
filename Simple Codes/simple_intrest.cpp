#include<stdio.h>
int main()
{
    int p,t,r;
    float si;
    printf("Enter Principle Amount \n ");
    scanf("%d",&p);
    printf("Enter Rate Of Intrest \n ");
    scanf("%d",&r);
    printf("Enter Time \n ");
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("Simple Intrest is %f ",si);
    return 0;
}