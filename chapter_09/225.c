#include <stdio.h>

main ()
{
  int n = 10;
  int *p = NULL;

  p = &n;
  printf("%p\n", p);

  return 0;
}
