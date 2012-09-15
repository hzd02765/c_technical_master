#include <stdio.h>

int is_digit(char x)
{
  if (((x) >= '0') && ((x) <= '9')){
    return 1;
  }else{
    return 0;
  }
}

main()
{
  char c;

  c = '0';
  if (is_digit(c)){
    printf("ｃは数値文字です。\n");
  }

  return 0;
}
