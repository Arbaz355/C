#include <stdio.h>
#include <conio.h>
int graetNum();
int main ()
{
	int result=greatNum();
	printf("Greater number is %d", result);
}
int greatNum()
{
	int a,b,greaterNum;
	printf("Enter any two no for compare\n:");
	scanf("%d%d", &a, &b);
	if(a>b)
	{
		greaterNum= a;
	}
	else 
	{
		greaterNum=b;
	}
	return greaterNum;
}

