/*Assigning all the members of a structure together*/
#include<stdio.h>
struct student{
    char name[50];
    float CGPA;
    int height;
}s;
int main()
{
    s=(struct student){"Bank of Boroda",8.79,160};
    printf("%s %f %d",s.name,s.CGPA,s.height);
    return 0;
}