#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int na;

	printf("element num is :");
	scanf("%d", &na);

	int *a = calloc(na, sizeof(int));

	if (a == NULL) {
		puts("Failled");
	} else {
		printf("%d個の整数を入力してください\n", na);
		for (int i = 0; i < na; i++) {
			printf("a[%d] : ", i);
			scanf("%d", &a[i]);
		}

		printf("各要素の値は次のとおりです\n");
		for (int i = 0; i < na; i++) {
			printf("a[%d] = %d\n", i, a[i]);
		}
		free(a);
	}

	return 0;
}
