#include <stdio.h>

#define OK 1
#define NG 0

int func(int src)
{
  if(src > 50){
    return OK;
  }else{
    return NG;
  }
}

main()
{
  int ret;

  ret = func(51);
  if (ret == OK){
    printf("OKです。\n");
  }else{
    printf("NGです。\n");
  }

  return (0);
}
