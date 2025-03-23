#include<stdio.h>
int sum(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);
int mod(int x,int y);
int main()
{
    int x,y,z;
    printf("Enter the x and y values:");
    scanf("%d %d",&x,&y);
    printf("The sum of two numbers is %d\n",sum(x,y));
    printf("The product of two numbers is %d\n",mul(x,y));
    printf("The substraction of two numbers is %d\n",sub(x,y));
    printf("The division of two numbers is %d\n",div(x,y));
    printf("The modulos of two numbers is %d",mod(x,y));
    return 0;

}
int sum(int x,int y)
{
    return (x+y);
}
int sub(int x,int y)
{
    return (x-y);
}
int mul(int x,int y)
{
    return (x*y);
}
int div(int x,int y)
{
    return (x/y);
}
int mod(int x,int y)
{
    return (x%y);
}