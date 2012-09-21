#include <stdio.h>

main()
{
  char buf[256];

  while(1){
    printf(">");
    gets(buf);
    if(buf[0] == '\0'){
      break;
    }
    printf("(%s)\n", buf);
  }
  return 0;
}
