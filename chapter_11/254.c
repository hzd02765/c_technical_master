#include <stdio.h>

#define BUF_SIZE 256

main()
{
  char buff[BUF_SIZE];
  printf("buffのサイズは%dバイトです。\n", (int)sizeof(buff));

  return (0);
}
