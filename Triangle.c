#include<stdio.h>
int main()
{
    int angle1,angle2,angle3,sum;
    printf("Enter the angles:");
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    sum=angle1+angle2+angle3;
    if(sum==180 && angle1>0 && angle2>0 && angle3>0)
    {
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is not valid");
    }
}