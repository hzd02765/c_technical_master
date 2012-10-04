#include <stdio.h>
#include <stdlib.h>

main()
{
  FILE *rfp;
  char c;

  rfp = fopen("moto.txt", "r");
  if (rfp == NULL){
    fprintf(stderr, "moto.txtファイルのオープンに失敗しました。\n");
    exit (0);
  }

  while (1){
    c = fgetc(rfp);
    if (c == EOF){
      break;
    }
    printf("%c", c);
  }

  fclose(rfp);

  return 0;
}
