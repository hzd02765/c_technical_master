#include <stdio.h>

main()
{
  char buf[256];

  while(1){
    printf(">");
    fgets(buf, sizeof(buf), stdin);
    if(buf[0] == '\n'){
      break;
    }
    printf("%s", buf);
  }
  
  return 0;
}
