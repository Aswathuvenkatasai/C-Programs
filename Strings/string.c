#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char simple_array[]="Simple string";
    char *simple_ptr=(char*)malloc(strlen("Simple string")+1);
    strcpy(simple_ptr,"Simple string");
    printf("%d\n",string_length(simple_ptr));
}
