#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[3][3], x,y,count,x1,x2,x3;
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
         for(x=0,count=0 ;x<=2;x++)
         {
             if(a[y][x]==1) count++;

         }
            if(y==0) x1=count;
            if(y==1) x2=count;
            if(y==2) x3=count;
          }
          if(x1>x2&&x1>x3) x=1;
           else if(x3>x2) x=3; else x=2;

          printf("Row with max no. of 1s: %d ",x);




         printf("\n");


    return 0;
}
