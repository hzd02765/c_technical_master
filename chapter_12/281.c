#include <stdio.h>
#include <stdlib.h>

main()
{
  char c;

  while(1){
    c = fgetc(stdin);
    if (c == EOF){
      break;
    }
    fprintf(stdout, "%c", c);
  }

  return 0;
}
