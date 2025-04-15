#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *blanks(int number);
int main()
{
    //printf("[%s]\n",blanks(5));
    char *tmp=blanks(5);
    printf("[%s]\n",tmp);
    free(tmp);
}
char *blanks(int number)
{
    char *spaces=(char*)malloc(number+1);
    int i;
    for(i=0;i<number;i++)
    {
        spaces[i]="";
    }
    spaces[number]='\0';
    return spaces;
}