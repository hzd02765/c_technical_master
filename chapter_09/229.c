#include <stdio.h>

main()
{
  int *pn = NULL;
  int n[] = {100, 150, 200};

  printf("%d\n", n[0]);
  printf("%d\n", n[1]);
  printf("%d\n", n[2]);

  pn = &(n[0]);
  printf("%d (%p)\n", *pn, pn);
  pn++;
  printf("%d (%p)\n", *pn, pn);
  pn++;
  printf("%d (%p)\n", *pn, pn);
  pn = &(n[0]);
  printf("%d (%p)\n", *(pn + 0), pn);
  printf("%d (%p)\n", *(pn + 1), pn);
  printf("%d (%p)\n", *(pn + 2), pn);

  return 0;
}
