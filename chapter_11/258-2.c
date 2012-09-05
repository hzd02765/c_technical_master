#include <stdio.h>

#define IS_DIGIT(x) ((((x) >= '0') && ((x) <= '9')) ? 1 : 0)

main()
{
  char c;

  c = '0';
  if (IS_DIGIT(c)){
    printf("cは数値文字です。\n");
  }


  return (0);
}
