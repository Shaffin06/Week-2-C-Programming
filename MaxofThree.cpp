/*Greatest of three*/
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
	printf("Greatest of the Three = %d", a);
	else if (b>a && b>c)
	printf("Greatest of the Three = %d", b);
	else
	printf("Greatest of the Three = %d", c);
	return 0;
}
