#include<stdio.h>
int main()
{
    int n,i,flag;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    i=2;
    flag=0;
    while(i<n)
    {
        if(n%i==0)
            flag=1;
        i++;
    }
    if(flag==0)
        printf("%d is Prime No ",n);
    else
        printf("%d is Not Prime No ",n);
    return 0;
}