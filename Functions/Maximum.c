#include<stdio.h>
int maximum(int x,int y);
int main()
{
    int a,b,c;
    printf("Enter the a and b values:");
    scanf("%d %d",&a,&b);
    //maximum(a,b);
    printf("Maximum of two numbers is %d",maximum(a,b));
    return 0;
}
int maximum(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}