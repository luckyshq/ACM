#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *fin = fopen("3-1-2.in", "rb");
  FILE *fout = fopen("3-1-2.out", "wb");
  double a[100];
  int b[11000];
  int c[110];
  int i, n = 0, max = 0;
  double x;
  int index = 0;
  double out = 0;
  for (i = 0; i < 110; i++)
    {
      c[i] = 0;
    }
  for (i = 0; i < 11000; i++)
    {
      b[i] = 0;
    }
  while(fscanf(fin, "%lf", &x) == 1)
    a[n++] = x;
    for (i = 0; i < n; i++)
    {
      index =(int) (a[i] * 100);
      b[index]++;
    }
  for (i = 0; i < 11000; i++)
    {
      if (b[max] < b[i])
	{
	  max = i;
	}
    }
  for (i = 0; i < 11000; i++)
    {
      if (b[i] == b[max])
	{
	  out = i / 100.0;
	  fprintf(fout, "%.2lf\n", out);
	}
    }
  fclose(fin);
  fclose(fout);
  return 0;
}
