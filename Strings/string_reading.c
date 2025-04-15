#include<stdio.h>
#include<string.h>
int main()
{
    char line[81];
    printf("Enter the characters:");
    scanf("%[^\n]",line);
    printf("The complete line of text is:%s",line);
    return 0;
}