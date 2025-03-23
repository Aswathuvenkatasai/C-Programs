#include<stdio.h>
int main()
{
    int number,rem,fact=1,sum=0;
    printf("Enter the factorial number:");
    scanf("%d",&number);
    int temp=number;
    while(number>0)
    {
        fact=1;
        rem=number%10;
        for(int i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        number/=10;
        sum+=fact;
       
    }
    if(temp==sum)
    {
        printf("It is a strong number");
    }
    else
    {
        printf("It is not a strong number");
    }
    return 0;
}