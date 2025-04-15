#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i;
    printf("Enter the number of integers to be printed:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not available\n");
        exit(1);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter an integer: ");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
    return 0;
}