#include <stdio.h>
#include <ctype.h>

main()
{
  int i;
  char str[] = "1234567890ABCDE";

  for (i = 0; str[i] != '\0'; i++){
    if (isdigit(str[i]) != 0){
      printf("%cは数字です。\n", str[i]);
    }else{
      printf("%cは数字以外です。\n", str[i]);
    }
  }

  return 0;
}
