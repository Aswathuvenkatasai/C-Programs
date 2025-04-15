/*C program reads characters until a newline, stores them in an array and terminates the string with a NUL character. It then prints out the string*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],ch;
    int i=0;
    printf("Enter some characters:");
    ch=getchar();
    while(ch!='\n')
    {
        str[i]=ch;
        i++;
        ch=getchar();
    }
    str[i]='\0';
    printf("The string is:\n");
    i=0;
    while (str[i]!='\0')
    {
        putchar(str[i]);
        i++;
    }
    printf("\n");
    return 0;  
}