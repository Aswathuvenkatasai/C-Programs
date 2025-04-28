#include<stdio.h>
int main()
{
    int n=16;
    int clear_bit=(n&(1<<5));
    printf("%d",clear_bit);
    return 0;
}