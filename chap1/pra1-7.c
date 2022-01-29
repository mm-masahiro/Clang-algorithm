#include <stdio.h>

int main(void) {
	int n;

	puts("1~nまでの総和を求める");
	printf("n: ");
	scanf("%d", &n);

	int sum = 0;

	if (n == 5) {
		for (int i = 0; i <= n; i++) {
			sum += i;
		};
	} else {
		return 0;
	}

	printf("sum is %d", sum);

	return 0;
}
