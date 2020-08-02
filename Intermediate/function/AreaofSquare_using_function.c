#include <stdio.h>
#include <conio.h>
int Areaofsquare(int a)
{
	int result;
	result= a*a;
	return result;
}
int main ()
{
	int side, area;
	printf("Enter the side of square");
	scanf("%d", &side);
	area=Areaofsquare(side);
	printf("Area of square is %d", area);
	getch();
}
