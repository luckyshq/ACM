#include <stdio.h>

int main(int argc, char *argv[])
{
  freopen("input", "r", stdin);
  int num;
  int frequency, amplitude;
  int flag = 0;
  int i, j, k, l;
  scanf("%d", &num);
  for (i = 0; i < num; i++)
    {
      if (i == num - 1)
	{
	  flag = 1;
	}
      scanf("%d%d", &amplitude, &frequency);
      for (l = 0; l < frequency; l++)
	{
	  for (j = 1; j <= amplitude; j++)
	    {
	      for (k = 0; k < j; k++)
		{
		  printf ("%d", j);
		}
	      printf ("\n");
	    }
	  for (j = amplitude - 1; j >= 1; j--)
	    {
	      for(k = 0; k < j; k++)
		{
		  printf ("%d", j);
		}
	      printf ("\n");
	    }
	  if (flag != 1 || l != frequency - 1)
	    {
	      printf("\n");
	    }
	}
      
    }
  return 0;
}
