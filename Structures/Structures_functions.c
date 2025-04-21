#include<stdio.h>
typedef struct{
    float real;
    float imag;
}complex;
void swap(complex a,complex b)
{
    complex temp;
    temp=a;
    a=b;
    b=temp;
}
void print(complex a)
{
    printf("(%f,%f)",a.real,a.imag);
}
main()
{
    complex x={4.0,5.0},y={10.0,15.0};
    print(x);
    print(y);
    printf("\n");
    swap(x,y);
    print(x);
    print(y);
    printf("\n");
}