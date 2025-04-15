#include<stdio.h>
int main()
{
    int num;
    int *ptr=&num,*ptr1=&num;
    if(ptr==ptr1)
    {
        printf("Both pointers locate the same address\n");
    }
    else
       printf("Locate the diiferent address");

    return 0;
}