#include <stdio.h>

main()
{
  int n;
  int *p;

  p = &n;
  *p = 10;
  printf("%d", n);

  return 0;
}
