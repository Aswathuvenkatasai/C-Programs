/*C program for implemeting the function pointer*/
#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int main()
{
    int (*func_ptr)(int,int);//Declare a function pointer
    //Pointer to the 'add' function
    func_ptr=add;
    printf("Addition:%d\n",func_ptr(10,5));
    //Pointer to the 'sub' function
    func_ptr=sub;
    printf("Substraction:%d\n",func_ptr(10,5));
    //Pointer to the 'mul' function
    func_ptr=mul;
    printf("Multiplication:%d\n",func_ptr(10,5));
    return 0;
}
// A function that adds two integers
int add(int a,int b)
{
    return a+b;
}
// A function that subtract two integers
int sub(int a,int b)
{
    return a-b;
}
// A function that multiplication of two integers
int mul(int a,int b)
{
    return a*b;
}