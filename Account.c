#include<stdio.h>
#include"Account.h"
int main()
{
    unsigned long int Account_Number;
    unsigned char Account_holder_name[100],IFSC_code[50],branch[30];
    printf("Enter Account_Number:");
    scanf("%ld",&Account_Number);
    printf("Enter Account_holder_name:");
    scanf("%s",&Account_holder_name);
    printf("Enter IFSC_code:");
    scanf("%s",&IFSC_code);
    printf("Enter Branch:");
    scanf("%s",&branch);
    account(Account_Number,Account_holder_name,IFSC_code,branch);
    return 0;
}