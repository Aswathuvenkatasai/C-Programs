#include<stdio.h>
#include<math.h>
typedef struct {
    float x,y;
}Point;
float distance(Point a,Point b)
{
    return sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
}
Point midpoint(Point a,Point b)
{
    Point mid;
    mid.x=(a.x+b.x)/2.0;
    mid.y=(a.y+b.y)/2.0;
    return mid;
}
float triangle_area(Point a,Point b,Point c)
{
    return fabs((a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y))/2.0);

}
int main()
{
    Point p1,p2,p3;
    printf("Enter coordinates for point_1:");
    scanf("%f %f",&p1.x,&p1.y);
    printf("Enter coordinates for point_2:");
    scanf("%f %f",&p2.x,&p2.y);
    printf("Enter coordinates for point_3:");
    scanf("%f %f",&p3.x,&p3.y);
    printf("Distance between point_1 and point_2:%.2f\n",distance(p1,p2));
    Point mid=midpoint(p1,p2);
    printf("Midpoint of point_1 and point_2:(%.2f,%.2f)\n",mid.x,mid.y);
    printf("Area of traingle formed by the 3 points:%.2f\n\n",triangle_area(p1,p2,p3));
    return 0;
};
