#include <stdio.h>
#include <string.h>
struct student
{
	int age;
	char gender;
	char name[20];
	char branch[15];
};
int main ()
{
	struct student s1;
	s1.age=20;
	strcpy(s1.name, "Arbaz");
	printf("\nname is %s", s1.name);
	printf("\nage is %d", s1.age);
	return 0;
}
