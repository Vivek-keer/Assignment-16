#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[3][3],b[3][3],x,y;
     printf("Enter the first matrix: \n");
     for(y=0;y<=2;y++)
     {
         for(x=0;x<=2;x++)
         {
             scanf("%d",&a[y][x]);
         }
     }
     printf("Enter the second matrix: \n");
      for(y=0;y<=2;y++)
     {
         for(x=0;x<=2;x++)
         {
             scanf("%d",&b[y][x]);
         }
     }
     printf("Sum of matrix: \n");
     for(y=0;y<=2;y++)
     {
         for(x=0;x<=2;x++)
         {
             printf(" %d  ",a[y][x]+b[y][x]);
         }
         printf("\n");
     }

    return 0;
}
