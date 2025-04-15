#include<stdio.h>
int main()
{
    short s,*ps=&s;
    char c,*pc=&c;
    printf("Content of ps before:%d\n",ps);
    ps+=1;
    printf("Content of ps after:%d\n",ps);
    printf("Content of pc before:%d\n",pc);
    pc+=1;
    printf("Content of pc after:%d",pc);
    return 0;
}