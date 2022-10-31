#include<stdio.h>
int main() 
{
   int i,space,rows,k;
   printf("Enter The Number Of Rows \n ");
   scanf("%d",&rows);
   k=0;
   for(i=1;i<=rows;i++,k=0) 
   {
      for(space=1;space<=rows-i;space++) 
      {
         printf("  ");
      }
      while(k!=(2*i-1)) 
      {
         printf("* ");
         k++;
      }
      printf("\n");
   }
   return 0;
}
