#include<stdio.h>
int main()
{
    int vector[]={28,41,7};
    int *pi=vector+2;
    //int *pi=vector+3;
    printf("%d\n",*pi);
    pi--;
    printf("%d\n",*pi);
    pi--;
    printf("%d\n",*pi);
    return 0;

}