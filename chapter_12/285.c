#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 1024
#define SEARCH_STR "int"

main()
{
  FILE *fp;
  char buff[BUF_SIZE];

  fp = fopen("src.c", "r");
  if (fp == NULL){
    fprintf(stderr, "ファイルのオープン失敗しました。");
    exit (0);
  }

  while (1){
    if (fgets(buff, BUF_SIZE, fp) == NULL){
      break;
    }
    if (strstr(buff, SEARCH_STR) != NULL){
      fprintf(stdout, "%sが見つかりました\n", SEARCH_STR);
      fclose(fp);
      return 0;
    }
  }

  fprintf(stdout, "%sは見つかりませんでした。\n", SEARCH_STR);
  fclose(fp);

  return 0;
}
