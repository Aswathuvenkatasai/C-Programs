#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N;
    float *ptr,avg,sum=0;
    printf("Enter the number of students:");
    scanf("%d",&N);
    ptr=(float*)malloc(N*sizeof(float));
    if(ptr==NULL)
    exit(1);
    printf("Input heights for %d students \n",N);
    for(int i=0;i<N;i++)
     scanf("%f",&ptr[i]);
    for(int i=0;i<N;i++)
      sum+=ptr[i];
    avg=sum/(float)N;
    printf("Average of height=%f\n",avg);
    free(ptr);
    return 0;
}