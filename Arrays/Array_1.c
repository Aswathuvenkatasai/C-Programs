/*C Program by using arrays to read and print the values*/
#include<stdio.h>
int main()
{
    int arr[10]; //Array declaration
    printf("Enter the elements for array:\n");//
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);//Reading the values
    }
    printf("The elements in the array are:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);// Printing the values
    }
    return 0;
}