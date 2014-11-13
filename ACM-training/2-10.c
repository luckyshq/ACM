#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *fout = fopen("2-10.out", "wb");
  int i, j, k, l, g, n, flag = 0, fla = 0;
  int a[9];
  for (i = 123; i <= 987/3; i++)
    {
      j = i*2;
      k = i*3;
      a[0] = i/100;
      a[1] = i/10 %10;
      a[2] = i%10;
      a[3] = j/100;
      a[4] = j/10 %10;
      a[5] = j%10;
      a[6] = k/100;
      a[7] = k/10 %10;
      a[8] = k%10;
      for (l = 0; l < 8; l++)
	{
	  for (g = l + 1; g<9; g++)
	    {
	      if (a[l] == a[g])
		{
		  flag++;
		}
	    }
	}
      if (flag == 0 )
	{
	  for (n = 0; n < 8; n++)
	    {
	      if (a[n] == 0)
		{
		  fla = 1;
		}
	    }
	  if (fla == 0)
	    {
	      fprintf(fout, "%d %d %d\n", i, j, k);
	    }else
	    fla = 0;
	}else
	flag = 0;
    }
  fclose(fout);
  return 0;
}


