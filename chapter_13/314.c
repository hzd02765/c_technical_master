#include <stdio.h>

main()
{
  char str[8] = "ABCDEFG";
  int i;

  for (i = 0; i < 8; i++){
    printf("[%02X](%c)\n", str[i], str[i]);
  }

  return 0;
}
