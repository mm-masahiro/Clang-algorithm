#include <stdio.h>

int main(void)
{
  int a, b, c;

  printf("3つの整数の最大値を求める\n");
  printf("aの値: ");
  scanf("%d", &a);
  printf("bの値: ");
  scanf("%d", &b);
  printf("cの値: ");
  scanf("%d", &c);

  int max = a;

  if (b > max) max = b;
  if (c > max) max = c;

  printf("最大値は%dです", max);

  return 0;
}