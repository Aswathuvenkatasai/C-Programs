#include<stdio.h>
void static_array();
int main()
{
    static_array();
}
void static_array()
{
    static int arr[10];
    for(int i=0;i<10;i++)
    {
        arr[i]=i*10;
        printf("%d\t",arr[i]);
    }
    printf("\n");
}