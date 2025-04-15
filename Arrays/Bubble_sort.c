#include<stdio.h>
#define MAX 100
int main()
{
  int arr[MAX],temp,exchange,n;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  printf("Enter the elements in the array:\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n-1;i++)
  {
    exchange=0;
    for(int j=0;j<n-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            exchange++;
        }
    }
    if(exchange==0)
      break;
  }
  printf("Sorted list is:\n");
  for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);
  return 0;
}