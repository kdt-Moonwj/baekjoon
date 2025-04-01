#include <stdio.h>

int main(void)
{
	int x,a, b,t;
	int a1, a2;

	scanf("%d %d", &a, &b);
	scanf("%d", &x);

	t = a * 60 + b;


	if ((t + x) >= (24 * 60))
	{
		t = (t + x) - (24 * 60);
		a1 = t / 60;
		a2 = t % 60;
	}
	else
	{
		t = t + x;
		a1 = t / 60;
		a2 = t % 60;
	}
	
	printf("%d %d", a1, a2);

	return 0;

}
