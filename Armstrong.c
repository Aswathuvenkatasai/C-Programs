#include<stdio.h>
int main()
{
    int number,rem,num=0,temp;
    printf("Enter the number:");
    scanf("%d",&number);
    temp=number;
    while(number>0)
    {
        rem=number%10;
        num+=rem*rem*rem;
        number/=10;
    }
    printf("%d\n",num);
    if(temp==num)
    {
        printf("It is a armstrong number");
    }
    else
    {
        printf("It is not a armstrong number");
    }
    return 0;
}