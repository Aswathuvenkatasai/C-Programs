#include<stdio.h>
#include<string.h>
int main()
{
    char *ptr="Yellow";
    while(*ptr!='\0')
    {
       // printf("%c",*ptr);
        putchar(*ptr);
        ptr++;
    }
    return 0;
}