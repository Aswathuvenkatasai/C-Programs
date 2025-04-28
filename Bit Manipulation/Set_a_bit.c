#include<stdio.h>
int main()
{
    int n=14;
    int mask=4;
    int set_bit=(n&(mask));
    if(set_bit==4)
    {
        printf("Bit is set");
    }
    else
      printf("Bit is not set");
    return 0;
}