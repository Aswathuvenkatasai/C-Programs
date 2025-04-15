/*C program for copying the array elements from one array to another array*/
#include<stdio.h>
int main()
{
    int a[10],b[10];
    printf("Enter the elements in first array:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered elements are in the first array is:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
        b[i]=a[i];
    }
    printf("\nAfter copying of elements:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;

}