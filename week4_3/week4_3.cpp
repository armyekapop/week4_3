#include<stdio.h>
int main()
{
	int n, m, f;
	scanf_s("%d", &n);
	m = 2, f = 0;
	if (n < 0)
	{
		printf("-1 x ");
		n *= -1;
	}
	while (n != 1)
	{
		if (n == 0)
		{
			break;
		}
		while (n % m == 0)
		{
			if (f > 0)
			{
				printf(" x ");
			}
			printf("%d", m);
			n = n / m;
			f++;
		}
		m++;
	}
	return 0;
}