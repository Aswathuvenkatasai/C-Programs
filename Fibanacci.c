#include<stdio.h>
int main()
{
    int t1=0,t2=1,t3,n;
    t3=t1+t2;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    printf("%d %d ",t1,t2);
    for(int i=3;i<=n;i++)
    {
        printf("%d ",t3);
        t1=t2;
        t2=t3;
        t3=t1+t2;
        //printf("%d")
    }
    return 0;

}