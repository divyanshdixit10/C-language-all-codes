#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    i=1;
    printf("Table Of %d Are \n",n);
    while(i<=10)
    {
        j=n*i;
        printf("%d \n ",j);
        i++;
    }
    return 0;
}