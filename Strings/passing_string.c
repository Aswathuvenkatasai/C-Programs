#include<stdio.h>
#include<string.h>
char* format(char *buffer,size_t size,const char* name,size_t quantity,size_t weight);
char* static_format(const char* name,size_t quantity,size_t weight);
int main()
{
    static char buffer[64];
    printf("%s\n",format(buffer,sizeof(buffer),"Venkat",24,62));
    char* part1=static_format("Venkat",22,60);
    char* part2=static_format("Venkat",23,61);
    printf("%s\n",part1);
    printf("%s\n",part2);
}
char* format(char *buffer,size_t size,const char* name,size_t quantity,size_t weight)
{
    snprintf(buffer,size,"Item:%s Quantity:%u Weight:%u",name,quantity,weight);
    return buffer;
}
char* static_format(const char* name,size_t quantity,size_t weight)
{
    static char buffer[64];
    sprintf(buffer,"Item:%s Quantity:%u Weight:%u",name,quantity,weight);
    return buffer;
}
