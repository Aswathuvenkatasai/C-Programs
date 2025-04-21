#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct struct_person{
    char *firstname;
    char *lastname;
    char *title;
    unsigned int age;
}person;
int main()
{
    person var;
    var.firstname=(char*)malloc(strlen("Venkat")+1);
    strcpy(var.firstname,"Venkat");
    var.age=22;
    person *ptrvar;
    ptrvar=(person*)malloc(sizeof(person));
    ptrvar->firstname=(char*)malloc(strlen("Venkat Sai")+1);
    strcpy(ptrvar->firstname,"Venkat Sai");
    ptrvar->age=23;
    printf("Age:%d\n",ptrvar->age);
    printf("first name:%s\n",ptrvar->firstname);
    free(ptrvar);
    //Without using points to operator
    person *ptrperson;
    ptrperson=(person*)malloc(sizeof(person));
    (*ptrperson).firstname=(char*)malloc(strlen("Aswathu Venkata Sai")+1);
    strcpy((*ptrperson).firstname,"Aswathu Venkata Sai");
    (*ptrperson).age=24;
    printf("Name:%s\n",(*ptrperson).firstname);
    printf("Age:%d",(*ptrperson).age);
    return 0;

}