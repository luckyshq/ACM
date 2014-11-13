#include <stdio.h>

int main(int argc, char *argv[])
{
  freopen("2-5.in", "r", stdin);
  freopen("2-5.out", "w", stdout);
  // FILE *fin = fopen("2-5.in", "rb");
  // FILE *fout = fopen("2-5.out", "wb");
  int n, i, m, count = 0;
  int a[4096];
  // fscanf(fin, "%d", &n);
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    {
      // fscanf(fin, "%d", &a[i]);
      scanf("%d", &a[i]);
    }
  // fscanf(fin, "%d", &m);
  scanf("%d", &m);
  for (i = 0; i < n; i++)
    {
      if (a[i] < m)
	{
	  count++;
	}
    }
  // fprintf(fout, "%d", count);
  // fclose(fin);
  // fclose(fout);
  printf ("%d\n", count);
  return 0;
}
