#include <stdio.h>
#include <string.h>

main()
{
  char str1[256];
  
  strcpy(str1, "abc");
  printf("文字列str1は %s\n", str1);
  strcat(str1, "def");
  printf("文字列str1は %s\n", str1);
  strcat(str1, "ghi");
  printf("文字列str1は %s\n", str1);

  return 0;
}
