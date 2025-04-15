/*C program to avoid segmentation fault while accessing the value of pointer using NULL pointer*/
#include<stdio.h>
int main()
{
    int *ptr=NULL;
    if(ptr==NULL)
    {
        printf("Pointer does not point to anything");
    }
    else{
        printf("Value pointed by pointer:%d",*ptr);
    }
    return 0;
}