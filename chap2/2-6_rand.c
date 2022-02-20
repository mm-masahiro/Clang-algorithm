#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int a, b, c, d, e;

	// srandの引数の数個randで実行した際の乱数を準備する
	// srandの引数を定数で指定すると何度実行しても同じ結果が得られてしまう
	srand(10);

	a = rand();
	b = rand();
	c = rand();
	d = rand();
	e = rand();

	printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", a, b, c, d, e);

	int v, w, x, y, z;

	// srandの引数を定数で置かず、現在時刻を入れることで毎回違う乱数を取得できる(これはよくある手法)
	srand(time(NULL));

	v = rand();
	w = rand();
	x = rand();
	y = rand();
	z = rand();

	printf("v = %d, w = %d, x = %d, y = %d, z = %d\n", v, w, x, y, z);

	return 0;
}
