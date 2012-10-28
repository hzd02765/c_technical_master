#include <stdio.h>
#include <string.h>

main()
{
  char str1[256], str2[256], str3[256];

  strcpy(str1, "abc");
  strcpy(str2, "def");

  strcpy(str3, str1);
  strcat(str3, str2);

  printf("文字列str3は %s\n", str3);

  return 0;
}
