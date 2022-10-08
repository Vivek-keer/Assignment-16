#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[3][3],b[3][3],x,y ;
     printf("Enter the first matrix: \n");
     for(y=0;y<=2;y++)
     {
         for(x=0;x<=2;x++)
         {
             scanf("%d",&a[y][x]);
         }
     }
     printf("lower Triangular matrix is: \n");

          for(y=0;y<=2;y++)
          {
         for(x=0;x<=2;x++)
         {
           if(x<=y)  printf("%d  ",a[y][x]);
           else printf("0  ");


         }

         printf("\n");
          }



    return 0;
}
