#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char* error="ERROR:";
    char* error_message="Not enough memory";
   /* char* buffer=(char*)malloc(strlen(error)+strlen(error_message)+1);
    strcpy(buffer,error);
    strcat(buffer,error_message);
    printf("%s\n",buffer);*/
    strcat_ownimple(error,error_message);
    printf("%s\n", strcat_ownimple(error,error_message));
    //printf("%s\n",error_message);
}
/*Own implementation of strcmp() using array version*/
int strcat_ownimple(char str1[],char str2[])
{
    int i=0,j=0;
    while(str1[i]!='\0')
    i++;
    while(str2[i]!='\0')
    {
        str1[i]=str2[2];
        i++;
        j++;
    }
    str1[i]='\0';
    return str1;

}