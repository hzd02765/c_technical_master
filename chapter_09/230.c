#include <stdio.h>

main()
{
  char tstr[] = "ABC";
  char *cstr = "ABC";

  printf("配列　　[%p]\n", &tstr);
  printf("　　　　[%p]\n", tstr);
  printf("　　　　[%p]\n\n", &(tstr[1]));
  printf("ポインタ[%p]\n", &cstr);
  printf("　　　　[%p]\n", cstr);
  printf("　　　　[%p]\n", &(cstr[1]));

  return 0;
}
