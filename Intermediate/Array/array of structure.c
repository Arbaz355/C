#include <stdio.h>
#include <conio.h>
struct employee
{
	char name [20];
	int sal;
	int id;
};
int main ()
{
	int i;
	struct employee emp[2];
	for (i=1; i<=2; i++)
	{
		printf("Enter the detail of employee%d", i);
		printf("\nEnter the name of employee: ");
		scanf("%s",&emp[i].name);
		printf("Enter the salllary of employee");
		scanf("%d", &emp[i].sal);
		printf("Enter the id of employee");
		scanf("%d", &emp[i].id);
	}
		printf("Employee detail are ");
		for (i=0; i<=2; i++)
		printf("\n%s\t%d\t%d",emp[i].name, emp[i].sal, emp[i].id);
}
