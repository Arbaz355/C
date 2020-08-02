#include <stdio.h>
#include <conio.h>
#define PI 3.141592653
int main()
{
	double r,area;
	printf("Enter the radius of circle");
	scanf("%lf", &r);
	area=PI*r*r;
	printf("Area of circle is %lf", area);
	getch();
}
