#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,col,**a2D;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    printf("Enter the number of coloumns:");
    scanf("%d",&col);
    *a2D=(int **)malloc(row*sizeof(int *));
    for(int i=0;i<row;i++)
      a2D[i]=(int *)malloc(col*sizeof(int));

    for(int i=0;i<row;i++)
      for(int j=0;j<col;j++)
      {
        printf("\na2D[%d][%d]=%d %d",i,j,row,col);
      }
      return 0;
    }