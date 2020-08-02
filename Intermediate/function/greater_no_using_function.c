#include <stdio.h>
#include <conio.h>
int greaterNum(); // function with no argument and no return type//
int main ()
{
	greaterNum();
	return 0;
}
int greaterNum()
{
	int a,b;
	printf("enter the any two number to find the greater number:");
	scanf("%d%d", &a,&b);
	if (a>=b)
	{
		printf("Greater number is %d", a);
	}
	else 
	{
		printf("Greater number is %d", b);
	}
}
