#include<stdio.h>
struct structurea_tag{
    char c;
    short int s;
}struct_A;
struct structureb_tag{
    short int s;
    char c;
    int i;
}struct_B;
struct structurec_tag{
    char c;
    double d;
    int s;
}struct_C;
struct structured_tag{
    double d;
    int s;
    char c;
}struct_D;
int main()
{
    printf("Sizeof(struct_A)=%d\n",sizeof(struct_A));
    printf("Sizeof(struct_B)=%d\n",sizeof(struct_B));
    printf("Sizeof(struct_C)=%d\n",sizeof(struct_C));
    printf("Sizeof(struct_D)=%d\n",sizeof(struct_D));
    return 0;
}