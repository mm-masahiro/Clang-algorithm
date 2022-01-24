#include <stdio.h>

int max(int a, int b, int c, int d)
{
  int max = a;
  if (b > max) max = b;
  if (c > max) max = c;
  if (d > max) max = d;

  return max;
}

int main(void)
{
  int a, b, c, d;

  printf("4つの整数の最大値を求める\n");

  printf("a:");
  scanf("%d", &a);
  printf("b:");
  scanf("%d", &b);
  printf("c:");
  scanf("%d", &c);
  printf("d:");
  scanf("%d", &d);

  printf("最大値は%d", max(a, b, c, d));

  return 0;
}
