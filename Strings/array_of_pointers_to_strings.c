#include<stdio.h>
#include<string.h>
int main()
{
    char *article[]={"Be","a","Learner","Achieve","More"};
    for(int i=0;i<5;i++)
      printf("%s\n",*(article+i));

    return 0;
}