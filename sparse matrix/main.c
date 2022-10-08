#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[10][10],n,x,y,count=0 ;
     printf("Enter the number :  "); scanf("%d",&n);
     printf("Enter the first matrix: \n");
     for(y=0;y<n;y++)
     {
         for(x=0;x<n;x++)
         {
             scanf("%d",&a[y][x]);
         }
     }
     printf("Given matrix is: ");

          for(y=0;y<n;y++)
          {
         for(x=0;x<n;x++)
         {
           if(a[y][x]==0) count++;
         }
          }
          if(n*n/2<count) printf("Sparse matrix");
          else printf("not Sparse matrix");

    return 0;
}







