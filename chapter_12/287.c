#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024
#define SEARCH_STR "int"

main()
{
  FILE *rfp;
  FILE *wfp;
  char buff[BUF_SIZE];

  rfp = fopen("src.txt", "r");
  if (rfp == NULL){
    fprintf(stderr, "ファイルのオープンに失敗しました。\n");
    exit (0);
  }
  
  wfp = fopen("dist.txt", "w");
  if (wfp == NULL){
    fprintf(stderr, "ファイルのオープンに失敗しました。\n");
    exit (0);
  }

  while (1){
    if (fgets(buff, BUF_SIZE, rfp) == NULL){
      break;
    }
    fputs(buff, wfp);
  }
  
  fclose(rfp);
  fclose(wfp);

  return 0;
}
