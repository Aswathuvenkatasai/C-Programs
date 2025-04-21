#include<stdio.h>
typedef struct{
    double x,y;
}point;
typedef struct{
    point A,B,C;
    double area;
}traingle;
int main()
{
traingle T={{1.0,2.0},{-4.0,5.0},{3.0,-6.0},-1};
T.area=T.A.x*(T.B.y-T.C.y)+T.B.x*(T.C.y-T.A.y)+T.C.x*(T.A.y-T.B.y);
T.area/=2;
if(T.area<0)
     T.area=-T.area;
printf("Area of T=%lf\n",T.area);
return 0;
}