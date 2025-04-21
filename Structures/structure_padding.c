#include<stdio.h>
struct example{
    int a;
    char b;
    char str_name[20];
    double c;
    float d;
};
int main()
{
    struct example e;
    printf("Size of structure:%d\n",sizeof(e));
    printf("Size occupied by int a:%d\n",sizeof(e.a));
    printf("Size occupied by char b:%d\n",sizeof(e.b));
    printf("Size occupied by string str_name:%d\n",sizeof(e.str_name));
    printf("Size occupied by double c:%d\n",sizeof(e.c));
    printf("Size occupied by float d:%d\n",sizeof(e.d));
    return 0;
}