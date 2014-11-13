#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *fout = fopen("2-7.out", "wb");
  int i;
  double total = 0.0;
  for (i = 1; 1.0/i > 0.000001; i += 2)
    {
      if ((i-1)%4 == 0)
	{
	  total += 1.0/i;
	}else
	total -= 1.0/i;
    }
  fprintf(fout, "%lf", total);
  fclose(fout);
  return 0;
}
