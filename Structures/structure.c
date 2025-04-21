#include<stdio.h>
int main()
{
    struct complex
    {
        float real;
        float complex;
    };
    struct complex a={2.4,5.6};
    struct complex b={3.7,9.0};
    struct complex c={4.6,7.3};
    printf("%f %f\n",a.real,a.complex);
    printf("%f %f\n",b.real,b.complex);
    printf("%f %f\n",c.real,c.complex);
    return 0;

}