#include <stdio.h>

// 2桁の正の整数値を読み込む
int main(void) {
	int num;

	printf("2桁の正の整数値を入力\n");

	do {
		printf("value is: ");
		scanf("%d", &num);
	} while (num < 10 || num > 99);

	printf("input value is %d", num);
	return 0;
}
