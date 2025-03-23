#include<stdio.h>
char alphabet(char ch);
int main()
{  
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    alphabet(ch);
    return 0;
}
char alphabet(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    printf("%c is an alphabet.", ch);
   else
    printf("%c is not an alphabet.", ch);

return 0;
}