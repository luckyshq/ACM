#include <stdio.h>

int main(int argc, char *argv[])
{
  int num, line;
  int a, b, c, sum, i;
  scanf("%d", &num);
  while(num--)
    {
      sum = 0;
      scanf("%d", &line);
      for (i = 0; i < line; i++)
	{
	  scanf("%d%d%d", &a, &b, &c);
	  sum += a * c;
	}
      printf ("%d\n",sum);
    }
  return 0;
}
