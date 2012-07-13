#include <stdio.h>

int waru12()
{
  int i;
  for (i = 100; i > 0; i--){
    if (i % 12 == 0){
      return i;
    }
  }
  return -1;
}

main()
{
  int result = 0;
  result = waru12();
  printf("結果は%dです。\n", result);

  return 0;
}
