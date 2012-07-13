#include <stdio.h>

int Table[] = {1, 2, 3, 4, 77, 4, 3, 2, 1, 100};

main()
{
  int i;
  int result;

  result = 0;
  for (i = 0; i < 10; i++){
    result += Table[i];
  }
  printf("%d\n", result);

  return 0;
}
