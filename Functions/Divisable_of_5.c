#include<stdio.h>
int division(int num);
int main()
{
    int number;
    printf("Enter the value:");
    scanf("%d",&number);
    division(number);
    return 0;

}
int division(int num)
{
    if((num%5==0)&&(num%11==0))
    {
        printf("%d is divisable by 5 and 11",num);
    }
    else 
      printf("%d is not divisable by 5 and 11",num);

    return 0;
}