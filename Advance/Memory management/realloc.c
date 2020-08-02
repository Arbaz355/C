#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main (){
	int *ptr, i, j, n1, n2;
	printf("Enter the size of element:");
	scanf("%d", &n1);
	ptr = (int*) malloc(n1*sizeof(int));
	
	printf("Memory location before the realloc:\n");
	for (i = 0; i<n1; ++i){
		printf("\n %u", ptr+i);
	}
	
	printf("\nEnter the new size of element:");
	scanf("%d", &n2);
	ptr = realloc(ptr, n2 * sizeof(int));
	
	printf("Mempry location after realloc: \n");
	for(i = 0; i<n2; ++i){
		printf("%u\n", ptr+i);
	}
	free(ptr);
	getch();
}
