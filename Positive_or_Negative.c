#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if(x<0)
    {
        printf("%d is a negative number",x);
    }
    if(x>0)
    {
        printf("%d is a positive number",x);
    }
    if(x==0)
    {
        printf("%d is a zero",x);
    }
    return 0;
}