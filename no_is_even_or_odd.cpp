#include<stdio.h>
int main()
{
    int n;
    printf("Enter Any Number \n ");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is Even ",n);
    else
        printf("%d is Odd ",n);
    return 0;
}