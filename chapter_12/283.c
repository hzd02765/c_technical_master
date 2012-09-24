#include <stdio.h>
#include <stdlib.h>

main()
{
  FILE *rfp;
  FILE *wfp;
  char c;

  rfp = fopen("moto.txt", "r");
  if (rfp == NULL){
    fprintf(stderr, "moto.txtファイルのオープンに失敗しました。\n");
    exit(0);
  }

  wfp = fopen("saki.txt", "w");
  if (wfp == NULL){
    fprintf(stderr, "saki.txtファイルのオープンに失敗しました。\n");
    exit (0);
  }

  while (1){
    c = fgetc(rfp);
    if (c == EOF){
      break;
    }
    fputc(c, wfp);
  }

  fclose(rfp);
  fclose(wfp);

  return 0;
}
