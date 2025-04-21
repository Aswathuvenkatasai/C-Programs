/*Assigning the one structure to another structer*/
#include<stdio.h>
struct class{
    int number;
    char name[20];
    float marks;
};
int main()
{
    struct class student1={234,"Venkat",89.09};
    struct class student2={546,"Sai",90.87};
    struct class student3;
    student3=student2;
    printf("Number:%d,Name:%s,Marks:%f",student3.number,student3.name,student3.marks);
    return 0;
}