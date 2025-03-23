#include<stdio.h>
int armstrong(int number);
int main()
{
    int num;
    printf("Enter the value:");
    scanf("%d",&num);
    armstrong(num);
    return 0;

}
int armstrong(int number)
{
    int rem,sum=0,temp;
    temp=number;
    while(number!=0)
    {
        rem=number%10;
        sum=sum+(rem*rem*rem);
        number/=10;
    }
    if(temp==sum)
    {
        printf("%d is a armstrong number",temp);
    }
    else
       printf("%d is not a armstrong number",temp);
    
    return 0;
}