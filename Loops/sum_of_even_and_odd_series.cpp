#include<stdio.h>
int main()
{
    int i,n,esum,osum;
    printf("Enter The Number \n ");
    scanf("%d",&n);
    esum=0;
    osum=0;
    i=1;
    while(i<=n)
    {
        if(i%2==0)
            esum=esum+i;
        else
            osum=osum+i;
        i++;
    }
    printf("Sum Of Even Number is %d \n",esum);
    printf("Sum Of Odd Number is %d ",osum);
    return 0;
}