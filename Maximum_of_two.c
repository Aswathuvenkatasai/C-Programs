#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the x and y values:");
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        printf("%d is the maximum number",x);
    }
    else
    {
        printf("%d is the maximum number",y);
    }
    return 0;
}