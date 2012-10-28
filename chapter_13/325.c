#include <stdio.h>
#include <string.h>

main()
{
  char str1[256], str2[256];
  int n1;

  n1 = 123;
  strcpy(str1, "abc");

  sprintf(str2, "%d%s", n1, str1);
  printf("文字列str2は %s\n", str2);

  return 0;
}
