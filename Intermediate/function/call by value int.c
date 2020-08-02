#include <stdio.h>
#include <conio.h>
int calc(int x);
int main()
{
	int x=10;
	calc(x);
	printf("The value of x in main is %d", x);
	return 0;
}
int calc(int x)
{
	x=x+10;
	printf("The value of x in function is%d", x);
	return 0;
}
