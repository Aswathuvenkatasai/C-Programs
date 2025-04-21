#include<stdio.h>
struct complex
{
    float real;
    float imag;
};
void add(struct complex *x,struct complex *y,struct complex *t);
int main()
{
    struct complex a,b,c;
    printf("Enter the real and imaginary values:");
    scanf("%f %f",&a.real,&a.imag);
    scanf("%f %f",&b.real,&b.imag);
    add(&a,&b,&c);
    printf("%f %f\n",c.real,c.imag);
}
void add(struct complex *x,struct complex *y,struct complex *t)
{
    t->real=x->real+y->real;
    t->imag=x->imag+y->imag;
}