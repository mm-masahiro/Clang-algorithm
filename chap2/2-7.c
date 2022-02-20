#include<stdio.h>
#include<stdlib.h>

#define swap(type, x, y) do { type t = x; x = y; y = t; } while(0)

int array_reverse(int a[], int n)
{
	for (int i = 0; i < n / 2; i++) {
		swap(int, a[i], a[n-i-1]);
	};
}

int main(void)
{
	int nx;

	printf("要素数: ");
	scanf("%d", &nx);

	int *x = calloc(nx, sizeof(int));

	for (int i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	};

	array_reverse(x, nx);

	printf("reverse done\n");
	for (int i = 0; i < nx; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}
	free(x);

	return 0;
}
