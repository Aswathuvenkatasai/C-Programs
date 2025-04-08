#include<stdio.h>
#include"types.h"
#include"Declaration.h"
void Pointer_to_array(unsigned int (*arr)[5])
{
    printf("\n/**Pointer to an array**/\n");
    printf("Enter the Values in the array:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&(*arr)[i]);
    }
    printf("Entered values are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",(*arr)[i]);
    }
}