#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *fout = fopen("2-4.out", "wb");
  FILE *fin = fopen("2-4.in", "rb");
  int n, i, j;
  fscanf(fin, "%d", &n);
  for (i = 0; i<n; i++)
    {
      for (j = i; j > 0; j--)
	{
	  fprintf(fout, " ");
	}
      for (j = 0; j < 2*n - 1 - 2*i; j++)
	fprintf(fout, "*");
      fprintf(fout, "\n");
    }
  fclose(fin);
  fclose(fout);
  return 0;
}
