/*C program for list the even and odd elements in the array*/
#include<stdio.h>
int main()
{
    int a[10],even[10],odd[10],i,j=0,k=0;
    printf("Enter the elements int the array:\n");
    for(int i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            even[j]=a[i];
            j++;
        }
        else
        {
          odd[k]=a[i];
          k++;
        }
    }
    printf("Even elements in the list are:\n");
    for(int i=0;i<j;i++)
    {
        printf("%d\t",even[i]);
    }
    printf("\nOdd elements in the list are:\n");
    for(int i=0;i<k;i++)
    {
        printf("%d\t",odd[i]);
    }
  return 0;
    
}