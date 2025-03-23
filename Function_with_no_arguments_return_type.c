/*Functions without arguments and without return type*/
#include<stdio.h>
void func();//Function Declaration
int main()
{
    int a,b,c;
   /*printf("Enter the a and b values:");
    scanf("%d %d",&a,&b);*/
    func();//Function Calling
    return 0;

}
void func()//Function Defination
{
    int a,b,c;
    printf("Enter the a and b values:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Sum of two numbers is %d",c);
}