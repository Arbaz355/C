#include <stdio.h>
#include <conio.h>
void main (){
	int *p, c, d;
	c = 150;
	d = 190;
	p = &c;
	printf("%d\t", *p);
	p = &d;
	printf("%d", *p);
	//getch();
}
