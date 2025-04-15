/*C program for sum of elements in the array*/
#include<stdio.h>
int main()
{
    int a[10],sum=0;
    printf("Enter the elements in the array:\n");
    for(int i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
        sum+=a[i];
    }
    printf("Sum of elements is %d",sum);
    return 0;
}