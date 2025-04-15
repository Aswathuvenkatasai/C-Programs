//C program to print the size of pointers and variables
#include<stdio.h>
int main()
{
    int num=23,*ptr=&num;
    char ch='X',*ptr1=&ch;
    float f=23.5,*ptr2=&f;
    printf("Size of ptr=%d, Size of *ptr=%d\n",sizeof(ptr),sizeof(*ptr));
    printf("Size of ptr1=%d, Size of *ptr1=%d\n",sizeof(ptr1),sizeof(*ptr1));
    printf("Size of ptr2=%d, Size of *ptr2=%d\n",sizeof(ptr2),sizeof(*ptr2));
    return 0;
}