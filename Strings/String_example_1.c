#include<stdio.h>
#include<string.h>
#define MAX 1000
int main()
{
    char myText[MAX],c;
    int i,n,wcount=0,lcount=0;
    while((c=getchar())!=0)
    {
        myText[i++]=c;
        myText[i]='\0';
    }
    n=strlen(myText);
    for(i=0;i<n;i++)
    {
        switch(myText[i])
        {
            case 1:
                 wcount++;
                 break;
            case 2:
                 lcount++;
                 break;
        }
        printf("\n The number of words is %d and sentences is %d",wcount,lcount);
    }
}