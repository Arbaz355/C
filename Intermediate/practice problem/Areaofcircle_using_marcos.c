#include <stdio.h>
#include <conio.h>
#define Areaofcircle(r) (3.1415*r*r) // this line is marcos which is just like fucnction but not a function
int main()
{
	double r,area;
	printf("Enter the radius of circle");
	scanf("%lf",&r);
	area=Areaofcircle(r);
	printf("area of circle is %lf", area);
}
