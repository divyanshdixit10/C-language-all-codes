#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter First Value \n ");
    scanf("%d",&a);
    printf("Enter Second Valuec\n ");
    scanf("%d",&b);
    printf("Before Swapping a = %d and b = %d \n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping a = %d and b = %d ",a,b);
    return 0;
}