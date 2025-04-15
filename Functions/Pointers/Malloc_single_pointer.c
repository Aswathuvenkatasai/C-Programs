#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a2D;
    int i,j,row,coloumn;
    printf("Enter number of rows:");
    scanf("%d",&row);
    printf("\nEnter number coloumns:");
    scanf("%d",&coloumn);
    a2D=(int *)malloc(row*coloumn*sizeof(int));
    for(i=0;i<row;i++)
      for(j=0;j<coloumn;j++)
      {
         printf("\n a2D[%d][%d]=%d %d",i,j,row,coloumn);

        // scanf("%d",a2D+i*row+j);
      }
      return 0;

}