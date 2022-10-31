#include<stdio.h>
int main()
{
    int f;
    float c;
    printf("Enter Temperature in Fahrenhite \n ");
    scanf("%d",&f);
    c=(f-32)*5/9.0;
    printf("Temperature in Centigrade is %f ",c);
    return 0;
}