#include<stdio.h>
int main()
{
    int n=14;
    int set_bit=(n|1);
   // set_bit=(~set_bit);
    printf("%d",set_bit);
    return 0;
}