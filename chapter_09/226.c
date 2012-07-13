#include <stdio.h>

main()
{
  int n = 10;
  int *p = NULL;

  p = &n;
  printf("%d", *p);

  return 0;
}
