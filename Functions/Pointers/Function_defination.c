#include<stdio.h>
#include"types.h"
void array_pointer(unsigned int *ptr)
{
  printf("/**Array to functions using pointer**/\n");
  printf("Enter the values in the array:\n");
  for(int i=0;i<5;i++)
  {
    scanf("%d",ptr+i);
  }  
  printf("Entered Values are:\n");
  for(int i=0;i<5;i++)
  {
    printf("%d\t",*(ptr+i));
  }
    
}