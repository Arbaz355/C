#include <stdio.h>
#include <conio.h>
int main ()
{
	int i,j,row;
	printf("Enter the number row you want to print the * pattern");
	scanf("%d", &row);
	for (i=1; i<=row; ++i)
	{
		for(j=i; j<=i; ++j)
		printf( "*");
}
printf("\n");
}
