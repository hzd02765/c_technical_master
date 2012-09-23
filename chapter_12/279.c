#include <stdio.h>
#include <stdlib.h>

main()
{
  FILE *fp;

  fp = fopen("sample_out.txt", "w");
  if (fp == NULL){
    fprintf(stderr, "ファイルのオープンに失敗しました。\n");
    exit (0);
  }
  fputs("書き込みのテスト\n", fp);
  fclose(fp);

  return 0;
}
