#include<stdio.h>
int main()
{
    int num,i,sum;
    printf("Enter the table number:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",num,i,(num*i));
    }
    return 0;
}