#include <stdio.h>
#include <math.h>

main()
{
  double dx, dy;
  double dist;
  double rad;

  dist = 20.0;
  rad = (3.141592 / 180.0) * 60.0;
  dx = dist * cos(rad);
  dy = dist * (rad);
  printf("x=%g y=%g\n", dx, dy);

  return 0;
}
