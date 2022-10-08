#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int x,y; int b[3][3];
    for(y=0;y<=2;y++)
    {
        for(x=0;x<=2;x++)
        {
            b[x][y]=a[y][x];
            printf("%d ",a[y][x]);
        }
    printf("\n");
    }
    printf("Transpose of given matrix is: \n");
   for(y=0;y<=2;y++)
    {
        for(x=0;x<=2;x++)
        {
           printf("%d ",b[y][x]);
        }
    printf("\n");
    }
}
