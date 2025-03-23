#include<stdio.h>
int main()
{
    int Physics,Chemistry,Biology,Mathematics,Computer;
    float percentage;
    printf("Enter the marks:");
    scanf("%d %d %d %d %d",&Physics,&Chemistry,&Biology,&Mathematics,&Computer);
    int total=Physics+Chemistry+Biology+Mathematics+Computer;
    percentage=(total/500.0)*100;
    printf("%.2f",percentage);
    if(percentage>=90)
    {
        printf("Grade A");
    }
    else if(percentage>=80)
    {
        printf("Grade B");
    }
    else if(percentage>=70)
    {
        printf("Grade C");
    }
    else if(percentage>=60)
    {
        printf("Grade D");
    }
    else if(percentage>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}