#include <stdio.h>

int main(void)
{
	char b[100];
	char c;
	int i,a,x,t;
	t = 0;
	scanf("%d", &a);

	for(i = 0; i < a; i++)
	{
		scanf(" %c", &c);
		b[i] = c;
	}
	for (i = 0; i < a; i++)
	{
		x = (int)b[i] - '0';
		t = t + x;
	}

	printf("%d", t);

	return 0;
}