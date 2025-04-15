#include<stdio.h>
int main()
{
    int a=5,*ptr;
    ptr=&a;
    printf("Input the numbe:");
    scanf("%d",ptr);
    printf("%d %d\n",a,*ptr);
    return 0;
}