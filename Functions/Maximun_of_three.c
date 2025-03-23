#include<stdio.h>
int maximum(int a,int b,int c);
int main()
{
    int x,y,z;
    printf("Enter the three values:");
    scanf("%d %d %d",&x,&y,&z);
    printf("Maximum of three numbers is %d",maximum(x,y,z));
    return 0;
}
int maximum(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>c && b>a)
    {
        return b;
    }
    else
     return c;
}