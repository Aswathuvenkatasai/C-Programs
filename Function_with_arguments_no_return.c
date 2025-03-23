/*Functions with arguments and without return type*/
#include<stdio.h>
void mul(int x,int y);
int main()
{
    int x,y;
    printf("Enter the x and y values:");
    scanf("%d %d",&x,&y);
    mul(x,y);
    return 0;
}
void mul(int x,int y)
{
    int z=x*y;
    printf("Multiplication of two numbers is %d",z);
}
