#include<stdio.h>
int main()
{
    int n,i,j,ctr,prime;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    for(i=1,ctr=1;ctr<=n;i++)
    {
        for(j=2,prime=1;j<i && prime==1;j++)
        {
            if(i%j==0)
                prime=0;
        } 
        if(prime==1)
        {
            printf("%d \n ",i);
            ctr++;
        }    
    }
    return 0;
}