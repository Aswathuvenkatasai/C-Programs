/*#include<stdio.h>
struct number
{
char ch;
int i;
};
int main()
{
struct number x;
x.i=100;
x.ch='A';
printf("ch=%c,i=%d",x.ch,x.i);
return 0;
}*/
#include<stdio.h>
union number
{
    char ch;
    int i;
};
int main()
{
  union number x;
  x.i=100;
  x.ch='A';
  printf("ch=%c,i=%d",x.ch,x.i);
  printf("Size of x is %d",sizeof(x));
  return 0;
}