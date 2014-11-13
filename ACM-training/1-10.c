#include <stdio.h>

int main(int argc, char *argv[])
{
  int n;
  scanf("%d",&n);
  if (n % 400 == 0)
    {
      printf ("yes\n");
    }else if (n % 100 != 0 && n % 4 == 0)
    {
      printf ("yes\n");
    }else
    printf ("no\n");
  return 0;
}
