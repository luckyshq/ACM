#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *fin = fopen("2-8.in", "rb");
  FILE *fout = fopen("2-8.out", "wb");
  double n, m;
  double i, total = 0;
  fscanf(fin, "%lf%lf", &n, &m);
  for (i = n; i <= m; i++)
    {
      total += 1.0/(i * i);
    }
  fprintf(fout, "%.5lf", total);
  fclose(fin);
  fclose(fout);
  return 0;
}
