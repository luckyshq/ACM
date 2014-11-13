#include <stdio.h>


int main(int argc, char *argv[])
{
  int n, k, times, i, j;
  scanf("%d%d", &n, &k);
  for (i = 1; i < 2*n+1; i += 2)
   {
      if (k != 0)
        {
          printf ("%d %d ", i+1, i);
          k--;
        }else
        printf ("%d %d ", i, i+1);
    } 
  return 0;
}



