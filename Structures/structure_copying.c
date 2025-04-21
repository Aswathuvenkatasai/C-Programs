#include<stdio.h>
struct list{
    int x[5];
};
int main()
{
    struct list a,b;
    printf("Enter the elements in the array:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a.x[i]);
    }
    printf("Entered values are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a.x[i]);
    }
    b=a;
    printf("After copying of elements in the array:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",b.x[i]);
    }
    return 0;
}