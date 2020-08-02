#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,choice;
	while(choice!=3)
	{
	printf("\n press 1 for addition");
	printf("\n press 2 for subtraction");
	printf("\nEnter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("enter any two number");
		scanf("%d%d", &a,&b);
		c=a+b;
		printf("%dAdditon is ", c);
		break;
		case 2:
		printf("enter any two number");
		scanf("&d&d", &a,&b);
		c=a-b;
		printf("%dsubtraction is ",c);
		break;
		default:
	    printf("You have entred wrong choice");
	    
	}
	}	
}
