#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int line;
  char word[20][30];
  int i, j;
  int count[20];
  int min = 40;
  int sum = 0;
  FILE *fin = fopen("input", "rb");
  FILE *fout = fopen("output", "wb");
  while(fscanf(fin, "%d", &line) != EOF)
    {
      for (i = 0; i < 20; i++)
	{
	  count[i] = 0;
	}

      if (line == 0)
	break;
      else{
	for (i = 0; i < line + 1; i++)
	  {
	    fgets(word[i], 30, fin);
	    for (j = 0; j < 25; j++)
	      {
		if (word[i][j] == ' ')
		  {
		    count[i]++;
		  }
	      }
	  }
	for (i = 1; i < line + 1; i++)
	  {
	    if (count[i] < min)
	      {
		min = count[i];
	      }
	  }
	for (i = 1; i < line + 1; i++)
	  {
	    sum += (count[i] - min);
	  }
	fprintf(fout, "%d\n", sum);
	sum = 0;
	min = 40;
      }
    }
  
  fclose(fin);
  fclose(fout);

  return 0;
}
