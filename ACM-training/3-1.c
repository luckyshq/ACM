#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *fin = fopen("3-1.in", "rb");
  FILE *fout = fopen("3-1.out", "wb");
  int a[100];
  int b[110];
  int c[110];
  int i, n = 0, x, max = 0;
  for (i = 0; i < 110; i++)
    {
      b[i] = 0;
      c[i] = 0;
    }
  while(fscanf(fin, "%d", &x) == 1)
    a[n++] = x;
  for (i = 0; i < n; i++)
    {
      b[a[i]]++;
    }
  for (i = 0; i < 110; i++)
    {
      if (b[max] < b[i])
	{
	  max = i;
	}
    }
  for (i = 0; i < 110; i++)
    {
      if (b[i] == b[max])
	{
	  fprintf(fout, "%d\n", i);
	}
    }
  fclose(fin);
  fclose(fout);
  return 0;
}
