/*C program to find the smallest element in the array*/
#include<stdio.h>
int main()
{
    int a[5],small;//Array declaration
    printf("Enter the elements in the array:");
    for(int i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    small=a[0];
    for(int i=0;i<5;i++)
    {
        if(small>a[i])
        {
            small=a[i];
        }
    }
    printf("The smallest element in the array is %d",small);
    return 0;

}