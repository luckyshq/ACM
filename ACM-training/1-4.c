#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
  double n;
  scanf("%lf",&n);
  printf ("%lf\n",sin(n*3.1415926/180));
  printf ("%lf\n",cos(n*3.1415926/180));
  return 0;
}
