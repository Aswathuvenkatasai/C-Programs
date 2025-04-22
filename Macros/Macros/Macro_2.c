#include<stdio.h>
#define SIZE 3
#define ARR 1,\
            2,\
            3
int main()
{
    int array[SIZE]={ARR};
    for(int i=0;i<SIZE;i++)
    printf("Array values are:Array[%d] is %d\n",i,array[i]);
    return 0;

}