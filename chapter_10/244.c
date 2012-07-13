#include <stdio.h>

int sum(int n1, int n2)
{
  return n1 + n2;
}

main()
{
  int n;
  n = sum(3, 7);
  printf("戻ってきた値 = %d", n);

  return 0;
}
