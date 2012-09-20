#include <stdio.h>

main()
{
  char buff[256];

  fgets(buff, sizeof(buff), stdin);
  fprintf(stdout, "標準出力へ:%s", buff);
  fprintf(stdout, "標準出力エラーへ:%s", buff);

  return (0);
}
