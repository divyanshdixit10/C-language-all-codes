#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    i=j=1;
    while(i<=n)
    {
        printf("%d \n ",j);
        j=j+i;
        i++;
    }
    return 0;
}