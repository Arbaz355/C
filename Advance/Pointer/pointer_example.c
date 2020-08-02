#include <stdio.h>
#include <conio.h>
void main(){
	variable();
	pointer1();
	pointer2();
	getch();
}
int variable(){
	int a;
	a = 10;
	printf("%d\t", a);
	printf("%d\n", &a);
}
int pointer1(){
	int a, *p;
	a = 20;
	p = &a;
	printf("%d\t", p);//address of pointer p
	printf("%d\n", *p);//value of p
}
int pointer2(){
	int a, *p; 
	*p = a;
	p = (int*)90;//type casing pointer to integer
	printf("%d\t", a);
	printf("%d", p);
}
