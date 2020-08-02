#include <stdio.h>
#include <conio.h>
void addTen(int *ptr){
	*ptr = *ptr+10;
}
void main(){
	int x =100;
	addTen(&x);
	printf("%d", x);
	getch();
}
