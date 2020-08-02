#include <stdio.h>
#include <conio.h>
int smallerNum();
int main ()
{
  int result;
  result=smallerNum();
  printf("smaller num %d", result);
}
int smallerNum()
{
	int x,y,smallerNum;
	printf("Enter any two no to find smaller number:");
	scanf("%d%d", &x,&y);
	if (x<=y)
	{
		smallerNum=x;
	}
	else 
	{
		smallerNum=y;
	}
	return smallerNum;
}

