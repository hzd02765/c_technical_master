#include <stdio.h>
#include <math.h>

main()
{
  double rad;
  double d;
  int i;

  for (i = 0; i < 180; i++){
    rad = (3.14 / 180.0) * i;
    d = cos(rad);
    printf("%d度のcos値：%g ", i, d);
    d = sin(rad);
    printf("%d度のsin値：%g ", i, d);
    d = tan(rad);
    printf("%d度のtan値：%g\n", i, d);

  }

  return 0;
}
