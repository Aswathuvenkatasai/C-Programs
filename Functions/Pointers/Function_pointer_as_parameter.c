/*C program for passing function pointer as an parameter*/
#include<stdio.h>

int multiply(int a,int b)
{
    return a*b;
}
//Function that takes a function pointer as an argument
void pointer(int x,int y,int (*func_ptr)(int,int))
{
    printf("Result:%d\n",func_ptr(x,y));
}

int main()
{
    // Call 'compute' and pass 'multiply' as a function pointer
    pointer(4,5,multiply);
    return 0;
}