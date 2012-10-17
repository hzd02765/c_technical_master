#include <stdio.h>
#include <ctype.h>

main()
{
  char str[] = "AbCdEfG012345";
  int i;

  for (i = 0; str[i] != '\0'; i++){
    if (islower(str[i]) != 0){
      printf("%cは英小文字です。\n", str[i]);
    }else{
      printf("%cは英小文字以外です。\n", str[i]);
    }
  }

  return 0;
}
