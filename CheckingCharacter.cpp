/*Checking Character*/
#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if (a=='a')
	printf("Alphabet");
	else if (a=='0' || a=='1' || a=='2')
	printf("Digit");
	else
	printf("Special Character");
	return 0;
}
