#include <stdio.h>

int main(void)
{

	int a,i;
	int x,y;
	scanf("%d", &a);

	for (i = 0; i < a; i++)
	{
		scanf("%d %d", &x, &y);

		printf("%d\n", x + y);

	}


	return 0;
}