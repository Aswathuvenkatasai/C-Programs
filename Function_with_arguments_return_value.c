/*Functions with arguments and with return value*/
#include<stdio.h>
int sum(int x,int y);//Function Declaration
int main()
{
    int x,y,z;
    printf("Enter the x and y values:");
    scanf("%d %d",&x,&y);
    z=sum(x,y);//Function Calling
    printf("Sum of two numbers is %d",z);
    return 0;
}
int sum(int x,int y)//Function Defination
{
    return (x+y);
}