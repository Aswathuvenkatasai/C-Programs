#include<stdio.h>
int fibanacci(int num);
int main()
{
    int number;
    printf("Enter the no of terms:");
    scanf("%d",&number);
    fibanacci(number);
    return 0;
}
int fibanacci(int num)
{
    int t1=0,t2=1,t3;
    t3=t1+t2;
    printf("%d %d ",t1,t2);
    for(int i=3;i<=num;i++)
    {
        printf("%d ",t3);
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }
    return 0;
}