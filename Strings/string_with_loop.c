#include<stdio.h>
#include<string.h>
int main()
{
    char colour[]="Green";
    int i=0;
    while(colour[i]!='\0')
    {
        printf("%c",colour[i]);
        i++;
    }
    printf("\n%d\n",sizeof(char));
    printf("%d",sizeof('a'));
    return 0;
}