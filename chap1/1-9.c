#include <stdio.h>

int main(void) {
	int n;
	do {
		printf("n: ");
		scanf("%d", &n);
	} while (n <= 0);

	int sum = 0;
	
	for (int i = 1; i <= n; i++) {
		sum += i;
	};

	printf("total is %d", sum);
	return 0;
}
