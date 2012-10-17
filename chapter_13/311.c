#include <stdio.h>
#include <math.h>

main()
{
  double d;
  
  d = fabs(-256);
  printf("%g\n", d);
  d = fabs(256);
  printf("%g\n", d);

  return 0;
}
