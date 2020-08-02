#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main(){
	int a, b, n, *ptr, sum = 0, i;
	printf("Enter the number of integer:");
	scanf("%d", &n);
	ptr =  (int*) malloc(n*sizeof(int));
	if (ptr == NULL){
		printf("!Memory allocation failed:");
		exit(0);
	}
	else{
		printf("enter the elements:");
		for ( i = 0; i < n; ++i){
				scanf("%d", ptr+i);
				sum += *(ptr+i);
		}
	}
	printf("Sum = %d\n", sum);
	free(ptr);
	getch();
}
