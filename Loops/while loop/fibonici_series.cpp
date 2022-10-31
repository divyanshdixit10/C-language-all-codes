#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    i=1;
    a=-1;
    b=1;
    while(i<=n)
    {
        c=a+b;
        printf("%d \n ",c);
        a=b;
        b=c;
        i++;
    }
    return 0;
}