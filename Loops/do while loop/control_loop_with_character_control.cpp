#include<stdio.h>
int main()
{
    int a,b;
    char ans;
    do
    {
        printf("Enter Two Numbers \n ");
        scanf("%d%d",&a,&b);
        if(a>b)
            printf("a = %d is Greater \n ",a);
        else
            printf("b = %d is Greater \n ",b);
        printf("Do You Want To Continue (y/n) \n ");
        scanf("%c",&ans);
    } while (ans=='Y'||ans=='y');
    return 0;
}