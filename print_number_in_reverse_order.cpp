#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        printf("%d \n ",i);
        i=i-1;
    }
    return 0;
}