#include<stdio.h>
int main()
{
    auto int a=34;
    printf("a=%d",a);
    int a=23;
    {
        printf("%d",a);
    }
    printf("a=%d",a);
    return 0;

}