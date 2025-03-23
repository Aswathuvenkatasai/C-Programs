#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("%d is a Even number",number);
    }
    else
      printf("%d is a Odd number",number);
    return 0;
}