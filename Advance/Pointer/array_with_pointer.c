#include <stdio.h>
#include <conio.h>
void main(){
	// &x[0] = x
	// &x[1] = 	x+1 means just add the 1 in the zero array index address
	// x[1] = *(x+1); or (&x[i] = x+1) && (x[i] = *(x+i))
	int i, x[6] , sum = 0;
	printf("Enter the 6 number to add");
	for (i = 0; i <6; ++i){
		scanf("%d", x+i);
		sum +=*(x+i);
	}
	printf("sum = %d", sum);
}
