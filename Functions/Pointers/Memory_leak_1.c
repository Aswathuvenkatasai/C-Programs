#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *ptr;
    while(1)
    {
        ptr=(char *)malloc(1000);
        printf("Venkata_Sai\n");
        free(ptr);
    }
    return 0;
}