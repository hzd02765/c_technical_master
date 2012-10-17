#include <stdio.h>

main()
{
  char str[16] = "ABC";
  int i;

  for (i = 0; str[i] != '\0'; i++){
    fputc(str[i], stdout);
  }

  printf("\n");

  return 0;
}
