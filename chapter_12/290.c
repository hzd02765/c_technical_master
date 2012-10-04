#include <stdio.h>
#include <stdlib.h>

main()
{
  FILE *rfp;
  char buff[256];
  
  rfp = fopen("moto.txt", "r");
  if (rfp == NULL){
    fprintf(stderr, "moto.txtファイルのオープンに失敗しました。\n");
  }
  
  while (1){
    if (fgets(buff, 256, rfp) == NULL){
      break;
    }
    printf("%s", buff);
  }

  fclose(rfp);

  return 0;
}
