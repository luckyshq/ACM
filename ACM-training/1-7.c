#include <stdio.h>

int main(int argc, char *argv[])
{
  int n;
  scanf("%d", &n);
  if (n*95 >= 300)
    {
      printf ("%.2lf\n",0.85*n*95);
    }else
    printf ("%d\n",n*95);
  return 0;
}
