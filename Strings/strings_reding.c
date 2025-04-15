#include<stdio.h>
#include<string.h>
#define SIZE 1000
int main()
{
    char line[SIZE],ch;
    int c=0;
    printf("Enter the characters %c\n",ch);
    do
    {
        ch=getchar();
        line[c]=ch;
        c++;
    } while (ch!='\n');
    c=c-1;
    line[c]='\0';
    printf("The complete line of text is:%s",line);
    return 0;
    
}