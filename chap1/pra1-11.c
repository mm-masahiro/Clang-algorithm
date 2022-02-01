#include<stdio.h>

int main(void) {
	int num;

	do {
		printf("正の整数を入力してください");
		scanf("%d", &num);
	} while (num <= 0);

	int digits = 0;

	while (num > 0) {
		num /= 10;
		digits++;
	}

	printf("桁数は%d桁", digits);

	return 0;
}
