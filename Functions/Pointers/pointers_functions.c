#include<stdio.h>
#include<stdlib.h>
typedef int(*operation)(int,int);
operation operations[128]={NULL};
void initialize_operations_array()
{
    operations['+']=add;
    operations['-']=subtract;

}
int evaluate_array(char opcode,int num1,int num2)
{
    fptr_operation operation;
    operation=operations[opcode];
    return operation(num1,num2);
}
int add()
int main()
{
    initialize_operations_array();
    printf("%d\n",evaluate_array('+',5,6));
    printf("%d\n",evaluate_array('-',5,6));
}
