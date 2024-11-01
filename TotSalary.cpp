/*Total Salary*/
#include <stdio.h>
int main()
{
	int a; float da,hra;
	scanf("%d",&a);
	if (a<10000)
	{
		da=0.5*a;
		hra=0.3*a;
		printf("Total Salary = %f", (float)(a+hra+da));
	}
	else if (a>=10000 && a<20000)
	{
		da=0.5*a;
		hra=0.25*a;
		printf("Total Salary = %f", (float)(a+hra+da));
	}
	else if (a>=20000)
	{
		da=0.5*a;
		hra=0.2*a;
		printf("Total Salary = %f", (float)(a+hra+da));
	}
	else
	printf("Invalid Input");
	return 0;
}
