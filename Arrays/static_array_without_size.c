#include<stdio.h>
void static_array();
int main()
{
    static_array();
}
void static_array()
{
    static int arr[]={34,43,23,67,56};
    for(int i=0;i<5;i++)
    {
        arr[i]=arr[i]*10;
        printf("%d\n",arr[i]);
    }
}