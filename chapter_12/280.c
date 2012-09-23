#include <stdio.h>
#include <string.h>

#define BUF_SIZE 6

main()
{
  char buff[BUF_SIZE];
  int i;
  int len;

  buff[0] = '1';
  buff[1] = '2';
  buff[2] = '3';
  buff[3] = '4';
  buff[4] = '5';
  buff[5] = '\0';
  len = strlen(buff);
  for(i = 0; i < len; i++){
    fputc(buff[i], stdout);
  }
  printf("\n");

  return 0;
}
