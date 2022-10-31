#include<stdio.h>
int main()
{
    int n,i,j,prime;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=2,prime=1;j<i && prime==1;j++)
        {
            if(i%j==0)
                prime=0;
        } 
        if(prime==1)
            printf("%d \n ",i);
    }
    return 0;
}