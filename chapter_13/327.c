#include <stdio.h>
#include <ctype.h>

main()
{
  char c;

  printf("文字を入力してください。>");
  c = getchar();
  if(isupper(c) != 0){
    printf("英大文字です。\n");
  }else if(islower(c) != 0){
    printf("英小文字です。\n");
  }else if(isdigit(c) != 0){
    printf("数字です。\n");
  }else{
    printf("それ以外です。\n");
  }

  return 0;
}
