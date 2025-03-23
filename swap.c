#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the x and y value:");
    scanf("%d %d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d %d",x,y);
    return 0;
}