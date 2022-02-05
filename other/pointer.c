#include <stdio.h>

int main(void) {
	int hoge;
	hoge = 10;

	int* hoge_pointer;
	int* hoge_pointer2;

	hoge_pointer = &hoge;

	hoge_pointer2 = hoge_pointer;

	// hoge_pointer = hoge;

	printf("%d\n", hoge);
	// printf("%d\n", hoge_pointer);

	return 0;
}
