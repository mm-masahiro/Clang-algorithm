#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int maxof(const int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max) max = a[i];
	};
	return max;
}

int main(void)
{
	int number;
	printf("人数: ");
	scanf("%d", &number);

	// number個のintサイズのメモリを確保
	int *height = calloc(number, sizeof(int));

	printf("pointer address is %p\n", height);

	srand(time(NULL));
	for (int i = 0; i < number; i++) {
		height[i] = 100+ rand() % 90;
		printf("height[%d] = %d\n", i, height[i]);
	}

	printf("最大値は%d\n", maxof(height, number));
	free(height);
	return 0;
}
