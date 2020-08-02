#include <stdio.h>
#include <conio.h>
int div();
int main ()
{
	int a, b, result;
	printf("Enter the two number to devide");
	scanf("%d%d", &a,&b);
	result=div(a, b);
	printf("Division result is %d", result);
	
}
int div(int a, int b)
{
	return(a/b);
}
