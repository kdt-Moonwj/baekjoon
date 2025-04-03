#include <stdio.h>

int main(void)
{

	int a,i;
	int x = 0;
	scanf("%d", &a);

	for (i = 1; i <= a; i++)
	{
		x = x + i;
	}

	printf("%d", x);

	return 0;
}