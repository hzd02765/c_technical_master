#include <stdio.h>

void print_hello(int kaisu)
{
  int i = 0;
  for (i = 0; i < kaisu; i++){
    printf("こんにちは。ｃ言語。\n");
  }
  return ;
}

main ()
{
  print_hello(10);
}
