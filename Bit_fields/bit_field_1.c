#include<stdio.h>
struct test
{
    unsigned int x;
    unsigned long int y:33;
    unsigned int z;
};
int main()
{
    printf("%lu",sizeof(struct test));
    return 0;
}

