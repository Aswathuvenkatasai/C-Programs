#include<stdio.h>
typedef struct{
    float real;
    float imag;
}complex;
complex add(complex a,complex b)
{
    complex temp;
    temp.real=a.real+b.real;
    temp.imag=a.imag+b.imag;
    return temp;
}
int main()
{
    complex x={4.0,5.0},y={10.0,15.0};
    complex z;
    z=add(x,y);
    printf("%f,%f\n",z.real,z.imag);
    return 0;
}