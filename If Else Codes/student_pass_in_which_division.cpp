#include<stdio.h>
int main()
{
    int p,c,m,e,h,total;
    float per;
    printf("Enter Marks of Physics \n ");
    scanf("%d",&p);
    printf("Enter Marks Of Chemistry \n ");
    scanf("%d",&c);
    printf("Enter Marks Of Maths \n ");
    scanf("%d",&m);
    printf("Enter Marks Of Hindi \n ");
    scanf("%d",&h);
    printf("Enter Marks of English \n ");
    scanf("%d",&e);
    total=p+c+m+e+h;
    printf("Total Marks is %d \n",total);
    per=total/5;
    printf("Percentage is %f \n",per);
    if(per>=60)
        printf("Pass in First Division %f ",per);
    else
    {
        if(per>=45)
            printf("Pass in Second Division %f ",per);
        else
        {
            if(per>=33)
                printf("Pass in Third Division %f ",per);
            else    
                printf("Failed ");
        }
    }
    return 0;
}