#include<stdio.h>
#define MACRO(x)if(x==0)printf("Out for a duck\n")
int main()
{
    int num=12;
    if(num<100)
        MACRO(num);
    else 
     printf("Scred a century\n");
}
