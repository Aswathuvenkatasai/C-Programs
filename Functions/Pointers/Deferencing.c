// C Program for dereferencing the pointer variables
#include<stdio.h>
int main()
{
    int a=87;
    float b=3.5;
    int *ptr=&a;
    float *ptr2=&b;
    printf("Value of ptr = Address of a=%p\n",ptr);
    printf("Value of ptr2 = Address of b=%p\n",ptr2);
    printf("Address of ptr=%p\n",&ptr);
    printf("Address of ptr2=%p\n",&ptr2);
    printf("Value of a=%d %d %d\n",a,*ptr,*(&a));
    printf("Value of b=%.1f %.1f %.1f\n",b,*ptr2,*(&b));
    return 0;
}