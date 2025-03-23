#include<stdio.h>
char digit(char ch);
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    digit(ch);
    return 0;
}
char digit(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is a alphabet",ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
         printf("%c is a digit",ch);
    }
    else
      printf("%c is a special character",ch);

    return 0;
}