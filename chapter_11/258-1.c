#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

main()
{
  int a, b, max;

  a = 100;
  b = 200;
  max = MAX(a, b);
  printf("大きい値は%dです。\n", max);

  return (0);
}
