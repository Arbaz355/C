#include <stdio.h>
#include <conio.h>
int greater();
int main()
{
   int result;
   result=greater();
   printf("greater number is %d", result);
}
int greater()
{
	int a,b,greaterNum;
	printf("Enter the any two number to find greater number");
	scanf("%d%d", &a,&b);
	if (a>=b)
	{
		greaterNum=a;
	}
	else 
	{
		greaterNum=b;
	}
	return greaterNum;
}
