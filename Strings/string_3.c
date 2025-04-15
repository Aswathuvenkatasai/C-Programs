#include<stdio.h>
#include<string.h>
int main()
{
    char str[81];
    printf("Enter the string:");
    scanf("%[ABCDEFGHIJKLMNOPQRSTUVWXYZ]",str);
    scanf("%[abcdefghijklmnopqrstuvwxyz]",str);
    printf("The complete line of text is:%s",str);
    return 0;

}