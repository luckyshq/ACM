#include <stdio.h>

int main(int argc, char *argv[])
{
  //  FILE *fin = fopen("2-2.in", "rb");
  FILE *fout = fopen("2-2.out", "wb");
  int a, b, c;
  for (a = 1 ; a <= 9; a++)
    {
      for (b = 0 ; b <= 9; b++)
	{
	  for (c = 0; c <= 9 ; c++)
	    {
	      if ((a*100 + b*10 + c) == (a*a*a + b*b*b + c*c*c))
		{
		  fprintf(fout, "%d ", a*100 + b*10 + c);
		}
	    }
	}
    }
  fclose(fout);
  return 0;
}
