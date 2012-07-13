#include <stdio.h>

void print_char_num(char moji, int num)
{
  int i;
  for (i = 0; i < num; i++){
    printf("%c", moji);
  }
}

main()
{
  int num = 5;
  char moji = 'A';

  print_char_num(moji, num);
}
