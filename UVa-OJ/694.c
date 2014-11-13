#include <stdio.h>

int main(int argc, char *argv[])
{
  freopen("input", "r", stdin);
  long long a, limit, terms; 
  int round = 0;

  while(scanf("%lld%lld", &a, &limit) != EOF)
    {
      if (a < 0 || limit < 0)
	break;
      round++;
      printf ("Case %d: A = %lld, limit = %lld, number of terms = ", round, a, limit);
      terms = 0;
      while(terms++, a != 1 && terms < limit)
	{
	  if (a % 2 == 0)
	    {
	      a = a / 2;
	    }else
	    { a = 3*a + 1;
	      if (a > limit)
		break;
	    }
	}
      printf ("%lld\n", terms);
    }
  return 0;
}
