#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *fin = fopen("2-9.in", "rb");
  FILE *fout = fopen("2-9.out", "wb");
  int a, b, c, i;
  fscanf(fin, "%d%d%d", &a, &b, &c);
  int rest;
  rest = a%b;
  fprintf(fout, "%d.", a/b);
  for (i = 0 ; i < c ; i++)
    {
      rest *= 10;
      if (i == c-1 && (rest % b) * 10/b > 4)//4 out 5 in
	{
	  fprintf(fout, "%d", rest/b + 1);
	}else
	fprintf(fout, "%d", rest/b);
      rest = rest % b;
    }
  
  fclose(fin);
  fclose(fout);
  return 0;
}
