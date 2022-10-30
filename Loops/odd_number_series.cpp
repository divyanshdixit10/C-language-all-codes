#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    i=1;
    printf("First %d Odd Numbers Are \n",n);
    while(i<=n)
    {
        j=2*i-1;
        printf("%d \n ",j);
        i++;
    }
    return 0;
}