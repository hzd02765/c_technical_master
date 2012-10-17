#include <stdio.h>
#include <ctype.h>

main()
{
  char c;
  printf("文字を入力してください >");
  c = getchar();
  if (islower(c) != 0){
    c = toupper(c);
    printf("%c", c);
  }else if(isupper(c) != 0){
    c = tolower(c);
    printf("%c", c);
  }else{
    printf("英数字ではありません。\n");
  }

  return 0;
}
