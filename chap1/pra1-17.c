#include <stdio.h>

int main(void) {
	int height;

	printf("height is: ");
	scanf("%d", &height);

	for (int i = 1; i <= height; i++) {
		int loop = 2 * (i - 1) + 1;
		int maxNum = 2 * height - 1;
		for (int j = 1; j <= height - 1; j++) {
			printf(" ");
		}
		for (int j = 1; j <= loop; j++) {
			printf("*");
		}
		printf("\n");
	}
}
