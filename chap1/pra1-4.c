#include <stdio.h>

int mod(int a, int b, int c)
{
	if (a >= b)
	{
		if (b >= c)
			return b;
		else if (a <= c)
			return a;
		else
			return c;
	} else if (a > c)
	{
		return a;
	} else if (b > c)
	{
		return c;
	} else
	{
		return b;
	}
}


int main(void)
{
	int a, b, c;
	printf("3つの整数の中央値を表示する\n");

	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);

	printf("中央値は%d", mod(a, b, c));
	return 0;
}
