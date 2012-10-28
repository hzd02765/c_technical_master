#include <stdio.h>
#include <string.h>

main()
{
  char str1[256];
  char *p;

  strcpy(str1, "ABCDEFGHI");
  p = strstr(str1, "CDE");
  if (p != NULL){
    printf("文字列CDEが見つかりました。\n");
    printf("先頭位置は%sです。\n", p);
  }

  return 0;
}
