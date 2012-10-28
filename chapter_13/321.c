#include <stdio.h>
#include <string.h>

main()
{
  char str1[256];
  char *p;

  strcpy(str1, "ABCDEFGHI");
  p = strchr(str1, 'C');
  if(p != NULL){
    printf("文字列Cが見つかりました。\n");
    printf("先頭位置は%sです。\n", p);
  }

  return 0;
}
