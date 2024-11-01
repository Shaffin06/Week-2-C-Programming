/*Vowel or Consonant*/
#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if (a=='a' || a=='e' || a=='o' || a=='i' || a=='u')
	printf("Vowel");
	else
	printf("Consonant");
	return 0;
}
