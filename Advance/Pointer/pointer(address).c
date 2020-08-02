# include <stdio.h>
#include <conio.h>
void main(){
	int *p, var;
	var = 2*(2+2);
	p = &var;
	var  = 1; // we can reassign the value of variable 
	*p = 20+30; // pointer is carrying the address of var so var = 50
	printf("value of var using pointer_p = %d \n", *p);
	printf("Address of var %p", &var);
	getch();
}
