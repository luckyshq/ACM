#include <stdio.h>

int main(int argc, char *argv[])
{
  int i, j, k;
  int x, y;
  int flag = 0;
  scanf("%d%d",&y ,&x);
  int cell[x][y];
  for (i = 0; i < y; i++)
    {
      for (j = 0; j < x; j++)
        {
          scanf("%d", &cell[j][i]);
        }
    }

      for (i = 0; i < y; i++)
        {
          if ((cell[0][i] == 1 || cell[x-1][i] == 1) && flag != 1)
            {
              printf("2");
              flag = 1;
            }
        }
      if (flag != 1)
        {
          for (i = 0; i < x; i++)
            {
              if ((cell[i][0] == 1 || cell[i][y-1] == 1) && flag != 1)
                {
                  printf("2");
                  flag = 1;
                }
            }
        }
      if (flag != 1)
        {
          printf("4");
        }

  return 0;
}
