#include <stdio.h>



int main(void)
{
	int a, a1, a2;
	int t;
	scanf("%d %d", &a1, &a2);

	if (a1 >= 0 && a1 <= 23 && a2 >= 0 && a2 <= 59)
	{
		t = a1 * 60 + a2;
		if (t >= 45)
		{
			t = t - 45;
			a1 = t / 60;
			a2 = t % 60;
		}
		else
		{
			t = t + 24 * 60 - 45;
			a1 = t / 60;
			a2 = t % 60;
		}
	}
	printf("%d %d", a1, a2);
	return 0;

}