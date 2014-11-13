#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *fin, *fout;
  fin = fopen("2-1.in","rb");
  fout = fopen("2-1.out","wb");
  int count;
  double input;
  fscanf(fin, "%lf", &input);
  for (count = 0; input >= 1; count++)
{
  input = input / 10.0;
 }
  fprintf(fout, "%d\n", count);
  fclose(fin);
  fclose(fout);
  return 0;
}
