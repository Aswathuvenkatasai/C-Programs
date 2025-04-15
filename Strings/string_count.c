#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char line[81];
    int i,n,count=0;
    scanf("%[^\n]",line);
    n=strlen(line);
    for(i=0;i<n;i++)
    {
        if(isupper(line[i]))
         count++;
    }
    printf("\n The no.of uppercase letters in the str %s is %d",line,count);
}