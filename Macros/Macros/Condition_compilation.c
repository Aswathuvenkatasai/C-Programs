#include<stdio.h>
#define FLAG 8
intmain()
{
    int a=20,b=4;
    #if FLAG>=3
    printf("Value of FLAG is greater than or equal to:3\n");
    a=a+b;
    a=a-b;

    printf("Vkues of variables a and b have been changed\n");
    else
       printf("Values of FLAG is lesser thjan or equal to 3\n");

    #endif
    printf("Values of variables a and b have been changed\n");
    printf("*a=%,b=%d\n",a,b);;
    return 0;
    
}