#include <stdio.h>

int main(int argc, char *argv[])
{
  double a, b, c;
  scanf("%lf,%lf,%lf", &a, &b, &c);
  printf ("%.3lf\n",(a+b+c)/3);

  return 0;
}
