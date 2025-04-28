/*C program to perform the bit wise operations*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the a and b values:");
    scanf("%d %d",&a,&b);
    printf("Bitwise AND of two numbers is %d\n",a&b);//Bit Wise AND operation
    printf("Bitwise OR of two numbes is %d\n",a|b);//Bit Wise OR operation
    printf("Bitwise XOR of two numbers is %d\n",a^b);//Bit Wise XOR operation
    printf("Bitwise NOT of a number is %d\n",~a);//Bit wise NOT operation
    printf("Left shift of a number is %d\n",a<<1);//Bit Wise left shift operation
    printf("Right shift of a number is %d",a>>1);//Bit wise right shift operation
    return 0;
}