#include <stdio.h>

#define debug_print(x) printf("TIME:%s LINE:%d %s",\
			      __TIME__,		   \
			      __LINE__,		   \
			      x)

int main()
{
  debug_print("複数行マクロのサンプルです。\n");

  return 0;
}
