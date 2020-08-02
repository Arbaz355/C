#include <stdio.h>
#include <conio.h>
void greatNum(int x, int y);
int main ()
{
 int x,y;
 greatNum(x, y);	
}
void greatNum(int x, int y)
{
	printf("Enter any two no to compare:\n");
	scanf("%d%d", &x, &y);
	if(x>y)
	{
		printf("Greater numer is %d", x);
	}
	else 
	{
		printf("Greater number is %d ", y);
	}
}
