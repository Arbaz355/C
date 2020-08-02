#include <stdio.h>
#include <conio.h>
void main (){
	int x[] = {12, 18, 19, 20, 80};
	int *p = &x[2];
	printf("Value of *p in x[]: %d\n", *p);
	printf("Value of *(p+1) in x[]: %d\n", *(p+1));
	printf("Value of *(p-1) in x[]: %d", *(p-1));
	getch();
}
