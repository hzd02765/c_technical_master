#include <stdio.h>

int func1(void);
int func2(void);

main()
{
  func1();
  func2();
  
  return (0);
}

#define BUF_SIZE 256

int func1(void)
{
  char buff[BUF_SIZE];

  printf("buffのサイズは%dバイトです。\n", (int)sizeof(buff));

  return (0);
}

#undef BUF_SIZE
#define BUF_SIZE 10

int func2(void)
{
  char buff[BUF_SIZE];
  printf("buffのサイズは%dバイトです。\n", (int)sizeof(buff));

  return(0);
}
