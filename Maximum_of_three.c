#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the x,y,and z values:");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y&&x>z)
    {
        printf("%d is the maximum number",x);
    }
    if(y>x&&y>z)
    {
        printf("%d is the maximum number",y);
    }
    else
    {
        printf("%d is the maximum number",z);
    }
return 0;
}