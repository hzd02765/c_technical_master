#include <stdio.h>

#define FILE_NAME "file.txt"

main()
{
  FILE *fp;
  
  fp = fopen(FILE_NAME, "a");
  if (fp == NULL){
    printf("ファイルがオープンできませんでした。(%s)\n", FILE_NAME);
  }else{
    printf("ファイルのオープンに成功しました。\n", FILE_NAME);
    fclose(fp);
  }

  return 0;
}
