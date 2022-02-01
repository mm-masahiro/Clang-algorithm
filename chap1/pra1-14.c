#include <stdio.h>

int main(void) {
	int step;
	printf("show square!\n");
	printf("step is: ");
	scanf("%d", &step);

	for (int i = 1; i <= step; i++) {
		for (int j = 1; j <= step; j++) {
			printf("*");
		}
		printf("\n");
	}
}
