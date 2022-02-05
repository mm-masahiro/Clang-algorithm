#include <stdio.h>

void swap(int* x, int* y)
{
	int tmp = *x;
	printf("%p\n", &x);
	printf("%d\n", *x);
	*x = *y;
	*y = tmp;
}

int main(void)
{
	int hoge = 10, foo = 5;

	swap(&hoge, &foo);

	printf("hoge: %d, foo: %d\n", hoge, foo);

	return 0;
}
