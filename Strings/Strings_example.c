#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="Hello";
    int i=0;
    while(str[i]!='\0')
    {
        putchar(str[i]);
        i++;
    }
    printf("\n");
    return 0;
}
