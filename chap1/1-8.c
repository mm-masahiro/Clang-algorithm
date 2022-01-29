#include <stdio.h>

int main(void) {
	int n;

	puts("1~nまでの総和を求める");
	printf("n: ");
	scanf("%d", &n);

	int sum = 0;

	for (int i = 0; i <= n; i++) {
		sum += i;
	};

	printf("sum is %d", sum);

	return 0;
}
