/*Percentage of Marks*/
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a>=90 && a<=100)
	printf("S");
	else if (a>=80 && a<=89)
	printf("A");
	else if (a>=70 && a<=79)
	printf("B");
	else if (a>=60 && a<=69)
	printf("C");
	else if (a>=50 && a<=59)
	printf("D");
	else if (a>=40 && a<=49)
	printf("E");
	else if (a<40)
	printf("F");
	else
	printf("Invalid Input");
	return 0;
}
