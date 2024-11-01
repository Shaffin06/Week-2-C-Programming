/*Equal or Not*/
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && b==c && a==c)
	printf("Equal");
	else
	printf("Not Equal");
	return 0;
}
