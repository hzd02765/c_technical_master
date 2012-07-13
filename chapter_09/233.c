#include <stdio.h>

main()
{
  char c;
  char str[] = "abcde";
  int i;

  c = getchar();
  for (i = 0; i < 5; i++){
    if (str[i] == c){
      printf("入力された文字は文字型配列strに存在します。");
      return 0;
    }
  }
}
