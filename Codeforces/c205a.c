#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    int i, j, k;
    scanf("%d", &n);
    int x[n], y[n];
    int odd_x = 0, odd_y = 0;
    int count = 0;
    int unsable = 0;
    for (i = 0; i < n ; i++)
	{
	    scanf("%d%d", &x[i], &y[i]);
	}
    for (i = 0; i < n; i++)
	{
	    if (x[i] % 2 == 1)
		{
		    odd_x++;
		}
	    if (y[i] % 2 == 1)
		{
		    odd_y++;
		}
	    if (x[i] % 2 == 1 && y[i] % 2 ==1)
		{
		    unsable++;
		}
	}
    if ((odd_x + odd_y) % 2 ==0 && odd_x % 2 == 0)
	{
	    printf("0");
	}else if ((odd_x + odd_y) % 2 == 0 && (odd_x + odd_y - 2*unsable) % 2 == 0 && odd_x + odd_y - 2*unsable != 0)
	{
		printf("1");
	}else
	printf("-1");
    return 0;
}
