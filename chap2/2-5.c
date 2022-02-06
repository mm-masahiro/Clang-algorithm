#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max) max = a[i];
	}

	return max;
}

int main(void)
{
	int num;
	printf("人数: ");
	scanf("%d", &num);

	// 要素数がnumの配列を生成
	int *height = calloc(num, sizeof(int));

	printf("%d人の身長を入力してください\n", num);
	for (int i = 0; i < num; i++) {
		printf("height[%d] : ", i);
		scanf("%d", &height[i]);
	}

	printf("max is %d\n", maxof(height, num));

	free(height);
	return 0;
}
