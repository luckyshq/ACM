#include <stdio.h>

int main(int argc, char *argv[])
{
  double n;
  scanf("%lf",&n);
  if (n >= 0)
    {
      printf ("%.2lf\n",n);
    }else
    printf ("%.2lf\n",-n);
  return 0;
}
