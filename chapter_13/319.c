#include <stdio.h>
#include <string.h>

main()
{
  char str1[256];

  strcpy(str1, "abc");
  if(strcmp(str1, "abc") == 0){
    printf("文字列比較　結果一致 %s=%s\n", str1, "abc");
  }

  return 0;
}
