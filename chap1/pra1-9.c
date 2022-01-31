#include <stdio.h>

int main(void) {
	int a, b, i, sum;
	puts("input a: ");
	scanf("%d", &a);
	puts("input b:");
	scanf("%d", &b);

	if (a <= b)
	{
		for (i = a; i <= b; i++) {
			sum += i;
		};
	} else
	{
		for (i = b; i <= a; i++) {
			sum += i;
		};
	}
	printf("Total is %d\n", sum);
	return 0;
}
