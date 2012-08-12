#include <stdio.h>

double sankaku(double teihen, double takasa)
{
	return teihen * takasa / 2.0;
}

main()
{
  double teihen = 20.0;
  double takasa = 10.0;
  double kekka;

  kekka = sankaku(teihen, takasa);

  printf("三角形の面積は%fです。\n", kekka);

  return (0);
}
