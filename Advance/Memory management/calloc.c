#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main (){
	int i, *ptr, sum = 0, n;
	printf("enter the number of element:");
	scanf("%d", &n);
	ptr = (int*) calloc(n, sizeof(int));
	if (ptr == NULL){
		printf("!Momory can not be allocated");
	}
	else{
		printf("enter the elements");
		for(i = 0; i<n; ++i){
			scanf("%d", ptr+i);
			sum += *(ptr+i);
		}
	}
	printf("sum = %d", sum);
	free(ptr);
	getch();
}
