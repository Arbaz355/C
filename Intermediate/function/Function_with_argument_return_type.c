#include <stdio.h>
#include <conio.h>
int greatNum(int x, int y);
int main ()
{
	int x,y,result;
	result =greatNum(x, y);
	printf("greater number is %d ", result);
	getch();
}
int greatNum(int x, int y)
{
	int greaterNum;
	printf("Enter any two number:\n");
	scanf("%d%d", &x, &y);
	if(x>y)
	{
		greaterNum=x;
	}
	else
	{
	   greaterNum=y;
	}
	return greaterNum;
}
