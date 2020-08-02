#include <stdio.h>
#include <conio.h>
int main ()
{
	int i,j,row;
	printf("Enter the number of to print");
	scanf("%d", &row);
	for(i=1; i<=row; ++i)
	{
		for(j=1; j<=i; ++j);
		printf("1");
	}
	
	printf("\n");
	getch();
}
