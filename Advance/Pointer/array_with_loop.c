#include <stdio.h>
#include <conio.h>
void main(){
	int x[4], i;
	for (i=0; i<4; i++){
		printf("&x[%d] = %p\n",i, &x[i]);
	}
	printf("Address of &[%d]%p ", &x);
	getch();
	// &x[0] = x 
    // x = *x;	
}
