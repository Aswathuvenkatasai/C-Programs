#include<stdio.h>
#define LITTLE_ENDIAN 0
#define BIG_ENDIAN 1
int endian();
int main()
{
    printf("%d",endian());
    return 0;
}
int endian()
{
    unsigned int i=1;
    char *p=(char*)&i;
    if(*p)
      return LITTLE_ENDIAN;
    else
      return BIG_ENDIAN;
}
