#include<stdio.h>
#include<string.h>
unsigned int string_length(const char* string);
int main()
{
    char simple_array[]="Simple String";
    char *simple_ptr=(char*)malloc(strlen("Simple string")+1);
    strcpy(simple_ptr,"Simple String");
    printf("%d\n",string_length(simple_ptr));
    printf("%d\n",string_length(simple_array));
    printf("%d\n",string_length(&simple_array[0]));
    return 0;
}
unsigned int string_length(const char* string)
{
    unsigned int length=0;
    while(*(string++))
    {
        length++;
    }
    return length;
}
