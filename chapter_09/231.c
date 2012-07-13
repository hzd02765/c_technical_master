#include <stdio.h>

main()
{
  char c;
  char *cp = &c;
  int n;
  int *np = &n;
  double d;
  double *dp = &d;

  printf("%p\n", cp);
  cp++;
  printf("%p\n\n", cp);
  printf("%p\n", np);
  np++;
  printf("%p\n\n", np);

  printf("%p\n", dp);
  dp++;
  printf("%p\n\n", dp);

  return 0;
}
