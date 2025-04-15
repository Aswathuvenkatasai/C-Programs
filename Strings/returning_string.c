#include<stdio.h>
#include<string.h>
char* return_a_literal(int code);
int main()
{
    int code;
    printf("Enter the code number:");
    scanf("%d",&code);
    printf("%s",return_a_literal(code));
    return 0;
}
char* return_a_literal(int code)
{
    switch(code){
        case 1:
             return "I know everything. So, I don't want know anything";
        case 2:
             return "I know everything. Even though I want to learn everything";
        case 3:
             return "I dont know anything. So, I dont want know to anything";
        case 4:
             return "I dont kmow anything. So, I want know to anything";
        default:
             return "I am not a human, even though animal";
    }
}
