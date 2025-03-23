/*Functions with no arguments with return value*/
#include<stdio.h>
int sum();//Function Declaration
int main()
{
    int x;
    x=sum();//Function Calling
    printf("Sum of the numbers is %d",x);
    return 0;
}
int sum()//Function Definition
{
    int a,b;
    printf("Enter the a and b values:");
    scanf("%d %d",&a,&b);
    return a+b;
}