#include <stdio.h>
#include <string.h>

main()
{
  char str1[256];
  
  strcpy(str1, "abc");
  if(strcmp(str1, "xxx") == 0){
    printf("文字列比較　結果一致 %s=%s\n", str1, "xxx");
  }else{
    printf("文字列比較　結果不一致 %s=%s\n", str1, "xxx");
  }

  return 0;
}
