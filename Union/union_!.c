#include<stdio.h>
union value{
    int intval;
    float floatval;
    char charval;
};
void printvalue(union value val,int type)
{
    switch(type)
    {
        case 0:printf("Integer:%d\n",val.intval);
               break;
        case 1:printf("Float:%.2f\n",val.floatval);
               break;
        case 2:printf("Char:%c\n",val.charval);
               break;
    }
}
int main()
{
    union value val;
    val.intval=23;
    printvalue(val,0);
    val.floatval=7.98;
    printvalue(val,1);
    val.charval='V';
    printvalue(val,2);
    return 0;

}