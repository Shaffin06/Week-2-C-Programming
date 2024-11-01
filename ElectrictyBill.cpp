/*Electricity Bill*/
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a<=100)
	printf("Electricity Bill = 200");
	else if (a>100 && a<=200)
	printf("Electricity Bill = %f", (float)(200+a*0.5));
	else if (a>200 && a<=300)
	printf("Electricity Bill = %f", (float)(200+a*0.3));
	else if (a>300)
	printf("Electricty Bill = %f", (float)(200+a*0.25));
	else
	printf("Invalid Input");
	return 0;
}
