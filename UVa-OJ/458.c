#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *fin = fopen("input", "rb");
  FILE *fout = fopen("output", "wb");
  char x;
  while(fscanf(fin, "%c", &x) != EOF)
    {
      if(x != '\n')
	fprintf(fout, "%c", x-7);
      else
	fprintf(fout, "\n");
    }
  fclose(fin);
  fclose(fout);
  return 0;
}
