#include<stdio.h>
#include"types.h"
#include"Declaration.h"
int main()
{
   unsigned int arr[5];
   unsigned int (*ptr)[5]=&arr;
   unsigned char *city[5];
   array_pointer(arr);
   Pointer_to_array(ptr);
   Pointer_array(city);
}