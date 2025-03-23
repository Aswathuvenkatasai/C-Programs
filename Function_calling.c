#include<stdio.h>
#include"function.h"
int main()
{
    int a,b;
    printf("Enter a and b values:");
    scanf("%d %d",&a,&b);
    int c=sum(a,b);
    printf("Sum of the two numbers is %d",c);
    return 0;
}