#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  freopen("input", "r", stdin);
  int round;
  char in[100];
  char origin[100];
  char guess[100];
  char ch;
  int flag;
  int fini;
  int count;
  int n, m, i, j, k, stroke;
  int num;
  while(1)
    {
      n = 0;
      m = 0;
      fini = 0;
      flag = 0;
      count = 0;
      stroke = 0;
      memset(origin, 0, sizeof(origin));
      scanf("%d", &round);
      if (round != -1)
	{
	  printf("Round %d\n", round);
	  getchar();
	  while((ch = getchar()) != '\n')
	    {
	      in[n++] = ch;
	    }
	  while((ch = getchar()) != '\n')
	    {
	      guess[m++] = ch;
	    }
	  for (i = 0; i < n; i++)
	    {
	      origin[i] = 1;
	    }
	  for (i = 0; i < m; i++)
	    {
	      flag = 0;
	      count = 0;
	      for (j = 0; j < n; j++)
		{
		  if (guess[i] == in[j] && origin[j] != 0)
		    {
		      origin[j] = 0;
		      flag = 1;
		    }
		}
	      for (j = 0; j < n; j++)
		{
		  if (origin[j] == 0)
		    count++;
		  if(count == n)
		    fini = 1;
		}
	      if (fini == 1)
		break;
	      if (flag != 1)
		{
		  stroke++;
		}
	      if (stroke == 7)
		break;
	    }
	  if (fini == 1)
	    {
	      printf("You win.\n");
	      continue;
	    }
	  else if (stroke == 7)
	    {
	      printf("You lose.\n");
	      continue;
	    }
	  else
	    {
	      printf("You chickened out.\n");
	      continue;
	    }

	}else
	break;
    }
  return 0;
}
