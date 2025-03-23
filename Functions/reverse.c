#include<stdio.h>
int reverse(int num);
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    reverse(number);
    return 0;
}
int reverse(int num)
{
    int rem,rev=0;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("Reverse of a number is %d",rev);
    return 0;

}