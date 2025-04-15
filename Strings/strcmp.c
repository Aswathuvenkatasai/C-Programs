#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int strcmp_ownimple(char *str1,char *str2);
//int strcmp_ownimple(char str1[],char str2[]);
int main()
{
   /*char command[16];
    printf("Enter the command:");
    scanf("%[^\n]",command);
    //gets(command);
    puts(command);
    if(strcmp(command,"Quit")==0)
    {
        printf("The command was Quit");
    }
    else{
        printf("The command was not Quit");
    }*/
   char str1[100],str2[100];
   printf("Enter the string 1:");
   gets(str1);
   printf("Enter the string 2:");
   gets(str2);
   printf("The comparision of two string is %d",strcmp_ownimple(str1,str2));
   return 0;
}
/*Own implementation of strcmp() using array version*/
/*int strcmp_ownimple(char str1[],char str2[])
{
    int i=0;
    while((str1[i]!='\0')&&(str2[i]!='\0')&&(str1[i]==str2[i]))
    {
        i++;
    }
    if(str1[i]==str2[i])
    return 0;
    else
    return (str1[i]-str2[i]);
}*/
/*Own implementation of strcmp() using pointer version*/
int strcmp_ownimple(char *str1,char *str2)
{
    while((*str1!='\0')&&(*str2!='\0')&&(*str1==*str2))
    {
        str1++;
        str2++;
    }
    if(*str1==*str2)
      return 0;
    else
     return (*str1-*str2);
}