/*C program to print the custom values using enum*/
#include<stdio.h>
enum status_code
{
    OK=200,NOT_FOUND=404,INTERNAL_ERROR=500
};
int main()
{
    enum status_code status=NOT_FOUND;
    printf("HTTP status code:%d\n",status);
    return 0;
}