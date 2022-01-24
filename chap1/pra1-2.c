#include <stdio.h>

int min(int a, int b, int c)
{
	int min = a;

	if (b < min) min = b;
	if (c < min) min = c;

	return min;
}

int main(void)
{
	int a, b, c;

	printf("3つの整数のうち最小値を求める\n");

	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);

	printf("最小値は%d", min(a, b, c));

	return 0;
}
