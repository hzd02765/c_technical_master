#include <stdio.h>

#define FILE_NAME "file.txt"

main()
{
  FILE *fp;

  fp = fopen(FILE_NAME, "r");
  if (fp == NULL){
    printf("ファイルがオープンできませんでした。(%s)\n", FILE_NAME);
  }else{
    printf("ファイルのオープンに成功しました。(%s)\n", FILE_NAME);
    fclose(fp);
  }

  return 0;
}
