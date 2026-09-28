#include <stdio.h>
#include <math.h>

struct point
{
	float x,y;
};

typedef struct point Point;

Point input()
{
	Point p;
	printf("enter x and y coordinates");
	scanf("%f %f",&p.x,&p.y);
	return p;
}
float distance(Point p1, Point p2)
{
	float n;
	n=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
	return n;
}
void output(Point p1,Point p2,float dist)
{
	printf("the distance between (%f,%f)and (%f,%f) is %f",p1.x,p1.y,p2.x,p2.y,dist);
}
int main()
{
	Point p1,p2;
	float d;
	p1=input();
	p2=input();
	d=distance(p1,p2);
	output(p1,p2,d);
}
