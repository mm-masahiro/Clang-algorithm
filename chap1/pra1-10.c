#include <stdio.h>

int main(void) {
	int a, b, sub;
	printf("input a: ");
	scanf("%d", &a);
	printf("input b: ");
	scanf("%d", &b);

	if (a >= b)
	{
		do {
			printf("you must input value b is more value a!!\n");
			printf("reinput b: ");
			scanf("%d", &b);
		} while (a >= b);
	};

	sub = b - a;

	printf("b - a = %d", sub);

	return 0;
}
