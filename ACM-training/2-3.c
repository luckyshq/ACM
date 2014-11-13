#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *fin = fopen("2-3.in", "rb");
  FILE *fout = fopen("2-3.out", "wb");
  int a, b, c, i, flag = 0;
  fscanf(fin, "%d%d%d", &a, &b, &c);
  for (i = 10; i < 101; i++)
{
  if (i % 3 == a && i % 5 == b && i % 7 == c)
    {
      fprintf(fout, "%d", i);
      flag = 1;
    }
}
  if (flag == 0)
    {
      fprintf(fout, "No answer");
    }
  fclose(fin);
  fclose(fout);
  return 0;
}
