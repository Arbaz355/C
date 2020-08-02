#include <stdio.h>
int main()
{
	char c;
	int UppercaseVowel, LowercaseVowel;
	printf("Enter the character");
	scanf("%d", &c );
	UppercaseVowel==(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	LowercaseVowel==(c=='a'||c=='e'||c=='i'||c=='o');
	
	if (UppercaseVowel||LowercaseVowel);
		printf("&c is a Vowel", c);
	return 0;
}
