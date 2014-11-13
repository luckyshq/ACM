#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fin = fopen("input", "rb");
  FILE *fout = fopen("output", "wb");
  
  char word[10000];
  int n = 0, i, j;
  while(fgets(word, 1000, fin))
    {
      for (i = 0; word[i] != '\0'; i++)
	{
	  if (isalpha(word[i]))
	    {
	      n++;
	      for (j = i; word[j] != '\0'; j++)
		{
		  if (!isalpha(word[j]))
		    {
		      break;
		    }
		}
	      i = j;
	    }
	   
	}
      fprintf(fout, "%d\n", n);
      n = 0;
    }

  fclose(fin);
  fclose(fout);
  return 0;
}

int isLetter(char a)
{
  if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
      return 1;
    }else
    return 0;
}
