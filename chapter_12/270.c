#include <stdio.h>

main()
{
  int c;

  while (1){
    c = getchar();
    if (c == 'Y' || c == 'y'){
      printf("はい。\n");
    }
    if (c == 'N' || c == 'n'){
      printf("いいえ。\n");
    }
    if (c == 'q'){
      break;
    }
  }
}
