#include<stdio.h>
int main()
{
int number, remainder, sum = 0, j;
printf("Enter a number:");
scanf("%d", &number);
for(j = 1; j < number; j++)  {
    remainder = number % j;
       if (remainder == 0)  {
                sum = sum + j;
                       }
      }
if (sum == number)
      printf(" Entered number is a Perfect Number");
else
      printf("\n %d is not a Perfect Number",sum);
return 0;

}
