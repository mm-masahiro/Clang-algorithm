#include<stdio.h>

int main(void)
{
	int a[7] = {2, 5, 1, 3, 9, 6, 7};

	// 配列の中身を入れ替える
	// a[i]とa[7 - i -1]の値を入れ替える作業を続ける
	for (int i = 0; i < (sizeof(a)/sizeof(a[0])) / 2; i++) {
		int tmp = a[i];

		a[i] = a[7-i-1];
		a[7-i-1] = tmp;

		printf("%d回目のループ\n", i+1);
		for (int n = 0; n < 7; n++) {
			printf("a[%d] = %d\n", n, a[n]);
		}
	}
	
	return 0;
}
