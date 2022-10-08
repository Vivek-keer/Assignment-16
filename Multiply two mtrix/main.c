#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[3][3],b[3][3],x,y,n,sum;
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
     printf("Multiplication of matrix: \n");
    for(n=0;n<=2;n++)
    {
     for(y=0;y<=2;y++)
     {
         for(sum=0,x=0;x<=2;x++)
         {
             sum=sum+a[n][x]*b[x][y];
         }
             printf(" %d  ",sum);
     }
     printf("\n");
    }


    return 0;
}
