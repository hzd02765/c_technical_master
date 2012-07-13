#include <stdio.h>

int Data[] = {-1, 1, 2, 3, 4, -1, 5, -1, -1, 6, 7, 8, 9};

main()
{
  int i, pos;
  int size;
  int s;

  s = 5;
  size = sizeof(Data) / sizeof(Data[0]);
  pos = 0;
  for (i = 0; i < size; i++){
    if (Data[i] != -1){
      if (s == pos){
	printf("位置=%d\n", Data[i]);
	break;
      }
      pos++;
    }
  }
  return (0);
}
