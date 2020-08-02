#include <stdio.h>
#include <conio.h>
int fact(int n);
int main(){
	int n;
	printf("Enter an integer:");
	scanf("%d", &n);
	printf(fact(n));
	
}
int fact(int n){
	if (n<=1){
		return 1;
	}
	else {
		return n*fact(n-1);
	}
}

