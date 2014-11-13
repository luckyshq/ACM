#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *fin = fopen("2-6.in", "rb");
  FILE *fout = fopen("2-6.out", "wb");
  int n, i;
  double total;
  fscanf(fin, "%d", &n);
  for (i = 1; i <= n; i++)
{
  total += 1.0/i;
 }
  fprintf(fout, "%.3lf", total);
  fclose(fout);
  fclose(fin);
  return 0;
}
