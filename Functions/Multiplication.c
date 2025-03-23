#include<stdio.h>
int mul(int number);
int main()
{
    int num;
    printf("Enter the table number:");
    scanf("%d",&num);
    mul(num);
    return 0;
}
int mul(int number)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",number,i,(number*i));
    }
    return 0;
}