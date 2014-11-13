#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  freopen("input", "r", stdin);
  int cases;
  int dish[41], tmp[41], DNA[10];
  int i, j;
  scanf("%d", &cases);

  while(cases--)
    {
      memset(dish, 0, sizeof(dish));
      dish[19] = 1;
      
      for (i = 0; i < 10; i++)
	scanf("%d", &DNA[i]);
      for (i = 0; i < 50; i++)
	{
	  for (j = 0; j < 40; j++)
	    {
	      tmp[j] = dish[j];
	      switch(dish[j])
		{
		case 0: putchar(' ');break;
		case 1: putchar('.');break;
		case 2: putchar('x');break;
		default: putchar('W');
		}
	    }
	  tmp[40] = dish[40];
	  putchar('\n');
	  for (j = 1; j < 40; j++)
	    dish[j] = DNA[tmp[j - 1] + tmp[j] + tmp[j + 1]];
	  dish[0] = DNA[tmp[0] + tmp[1]];
	}
      if (cases > 0)
	{
	  putchar('\n');
	}
    }
  return 0;
}
