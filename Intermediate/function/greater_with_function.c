#include <stdio.h>
void greaterNum();
int main ()
{
   void greaterNum();
   return 0;	
}
void greaterNum()
{
	int i,j;
	printf("Enter any two number two to compare:");
	scanf("%d%d", &i, &j);
	if(i>j)
	{
		printf("The greater number is %d", i);
	}
	else
	{
		printf("The greater number is %d", j);
	}
}
