#include <stdio.h>
#include <conio.h>
int swap (int *n1, int *n2);
int main (){
	int num1 = 10, num2 = 20;
	swap (&num1, &num2);
	printf("%d\t", num1);
	printf("%d", num2);
	getch();
}
int swap(int *n1, int *n2){
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
