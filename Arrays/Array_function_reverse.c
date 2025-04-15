#include<stdio.h>
int reverse(int arr[],int n);
int main()
{
    int arr[100],n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    return 0;
}
int reverse(int arr[],int n)
{
    int i;
    printf("Reverse of an array is:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    
}