#include <stdio.h>

int main(void) {
	int n;
	puts("1~nまでの総和を求める");
	printf("n: ");
	scanf("%d", &n);

	int sum = 0;
	int i = 1;

	while (i <= n) {
		sum += i;
		i++;
	};
	printf("sum is %d", sum);
	return 0;
}
