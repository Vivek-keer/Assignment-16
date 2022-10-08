#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[3][3],b[3][3],x,y,sr=0,sc=0;
     printf("Enter the first matrix: \n");
     for(y=0;y<=2;y++)
     {
         for(x=0;x<=2;x++)
         {
             scanf("%d",&a[y][x]);
         }
     }

          for(y=0;y<=2;y++)
          {
         for(x=0,sr=0,sc=0;x<=2;x++)
         {
             sr=sr+a[y][x];
             sc=sc+a[x][y];

         }
         printf("Sum of %d row is %d\n",y+1,sr);
         printf("Sum of %d column is %d\n",y+1,sc);
          }

         printf("\n");


    return 0;
}
