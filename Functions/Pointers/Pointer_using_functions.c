/*C program to illustrate how passing NULL works*/
#include<stdio.h>
void foo(int *string)
{
    if(string==NULL)
    {
     printf("NULL pointer passed");
     return;
    }
    printf("Non-NULL pointer passed");
}
int main()
{
   // int num=23;
    foo(NULL);
    return 0;
}