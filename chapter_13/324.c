#include <stdio.h>
#include <string.h>

main()
{
  char str1[256], str2[256], str3[256];

  strcpy(str1, "abc");
  strcpy(str2, "def");

  sprintf(str3, "%s%s", str1, str2);

  printf("文字列str3は %s\n", str3);

  return 0;
}
