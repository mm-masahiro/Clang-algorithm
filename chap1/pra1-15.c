#include <stdio.h>

int main(void) {
	int height, width;
	printf("show rectangle\n");
	printf("height is: ");
	scanf("%d", &height);
	printf("width is: ");
	scanf("%d", &width);

	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= width; j++) {
			printf("*");
		}
		printf("\n");
	}
}
