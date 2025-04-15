#include<stdio.h>
#include<string.h>
int strlen_ownimplement(char str[]);
int main()
{
    char str[]="learner";
    short int length=strlen(str);
    printf("The length of the string is:%d",strlen_ownimplement(str));
    return 0;
}
/*Own implementation of strlen() using array version
int strlen_ownimplement(char str[])
{
    int i=0;
    while(str[i]!='\0')
     {
        i++;
     }
     return i;
}*/

/*Own implementation of strlen() using pointer version*/
int strlen_ownimplement(char *str)
{
    char *lstr=str;
    while(*str!='\0')
    {
        str++;
    }
    return (str-lstr);
}
