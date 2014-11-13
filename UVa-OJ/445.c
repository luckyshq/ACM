#include <stdio.h>

int main(int argc, char *argv[])
{
  char x;
  int i, buffer = 0;
  freopen("input", "r", stdin);
  while(scanf("%c", &x) != EOF)
    {
      if (x >= '0' && x <= '9')
	{
	  buffer += (x - '0');
	}
      else if(x == '!')
	printf ("\n");
      else if(x == '\n')
	printf ("\n");
      else
	{
	  for (i = 0; i < buffer; i++)
	    {
	      if (x == 'b')
		{
		  printf(" ");
		}
	      else
		printf ("%c", x);
	    }
	  buffer = 0;
	}
    }

  return 0;
}
