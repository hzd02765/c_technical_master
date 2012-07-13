#include <stdio.h>

main()
{
  char *cstr = "abc";

  printf("%c", *cstr);
  cstr++;
  printf("%c", *cstr);
  cstr++;
  printf("%c", *cstr);

  return 0;
}
