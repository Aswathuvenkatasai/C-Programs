/* C program for find the square of a number and factorail of a number using function pointer*/
#include<stdio.h>
int (*fptr1)(int);
int square(int num);
int factorial(int n);
int main()
{
    int n=5;
    fptr1=square;
    printf("%d squared is %d\n",n,fptr1(n));
    fptr1=factorial;
    printf("%d factorial is %d\n",n,fptr1(n));
    return 0;
}
int square(int num)
{
    return num*num;
}
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}