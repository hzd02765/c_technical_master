#include <stdio.h>
#include <ctype.h>

main()
{
  char str[] = "AbCdEfG012345";
  int i;
  
  for (i = 0; str[i] != '\0'; i++){
    if (isupper(str[i]) != 0){
      printf("%cは英大文字です。\n", str[i]);
    }else{
      printf("%cは英大文字以外です。\n", str[i]);
    }
  }

  return 0;
}
