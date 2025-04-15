/*C program for finding the largest element in array*/
#include<stdio.h>
int main()
{
    int n,arr[5],large;
    printf("Enter the elements in the array:\n");
    for(int i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Elements in the array are:\n");
    for(int i=0;i<5;i++)
    {
    printf("%d\t",arr[i]);
    }
    large=arr[0];
    for(int i=0;i<5;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
    printf("\nLargest element in the array is %d",large);
    return 0;
}

