#include<stdio.h>
int x=1;
void c(void);
int main()
{
 c();
 c();
}
void c(void)
{
    printf("%d\n",x);
    x*=10;
    printf("%d\n",x);
}
