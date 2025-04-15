#include<stdio.h>
int main()
{
    int num=23,*ptr=&num;
    printf("%d",*(&num));
    return 0;
}