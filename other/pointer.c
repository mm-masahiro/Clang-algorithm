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
	// %pでポインタ渡す
	printf("%p\n", &hoge);
	printf("%p\n", hoge_pointer);
	printf("%p\n", hoge_pointer2);
	printf("%d\n", *hoge_pointer);
	// hoge_pointerのメモリアドレス
	printf("%p\n", &hoge_pointer);

	return 0;
}
