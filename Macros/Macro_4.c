#include<stdio.h>
#define PROD(x,y)x*y
int main()
{
    printf("%d\n",PROD(2,4));
    printf("%d\n",PROD(3+4,5+1));
    printf("%d\n",60/PROD(5,4));
    return 0;
}