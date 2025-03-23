#include<stdio.h>
char Upper_case(char ch);
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    Upper_case(ch);
    return 0;
}
char Upper_case(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c is a Upper case letter",ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
         printf("%c is a lower case letter",ch);
    }
    else
      printf("%c is a special character",ch);

   return 0;
}