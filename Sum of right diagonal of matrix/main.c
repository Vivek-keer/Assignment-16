#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[3][3],b[3][3],x,y,sum=0;
     printf("Enter the first matrix: \n");
     for(y=0;y<=2;y++)
     {
         for(x=0;x<=2;x++)
         {
             scanf("%d",&a[y][x]);
         }
     }

     printf("Sum of right diagonal of matrix: \n");

         for(x=0;x<=2;x++)
         {
             sum=sum+a[x][x];
         }
             printf(" %d  ", sum);
         printf("\n");


    return 0;
}
