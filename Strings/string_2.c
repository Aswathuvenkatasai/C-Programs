#include<stdio.h>
#include<string.h>
int main()
{
    char col[]="blue";//Array of characters
    printf("Colour=%s\n",col);
    char *color="blue";// Pointer to strings
    printf("Colour=%s\n",color);
    char *colour="blue";
    puts(colour); 
    return 0;
}