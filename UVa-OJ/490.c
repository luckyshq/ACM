#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  FILE *fin = fopen("input", "rb");
  FILE *fout = fopen("output", "wb");
  
  char word[110][110];
  int i, j, k;
  int n = 0;
  int max = 0;
  memset(word,' ',sizeof(word));
  while(fgets(word[n++], 110, fin) != NULL)
    {
    }
  for (i = 0; i < n - 1; i++)
    {
      for (j = 0; j < 110; j++)
  	{
  	  if (word[i][j] == '\0')
  	    {
	      if (j > max)
		{
		  max = j;
		}
	    }
  	}
    }

  for (i = 0; i < max - 1; i++)
    {
      for (j = n - 2; j >= 0; j--)
	{
	  if (word[j][i] == '\n' || word[j][i] == '\0')
	   {
	    word[j][i] = ' ';
	    fprintf(fout, "%c", word[j][i]);
	    }
	  else if (word[j][i] != '\n')
	    fprintf(fout, "%c", word[j][i]);
	}
      fprintf(fout, "\n");
    }
  

  fclose(fin);
  fclose(fout);
  return 0;
}
