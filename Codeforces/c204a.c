#include <stdio.h>

int main(int argc, char *argv[])
{
    freopen("input", "r", stdin);

    int n;
    int count5 = 0, count0 = 0;
    int tmp;
    int i, j, k;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
	{
	    scanf("%d", &tmp);
	    if (tmp == 5)
		count5++;
	    else
		count0++;
	}
    if (count5 >= 9 && count0 > 0)
	{
	    tmp = count5 % 9;
	    for (i = 0; i < count5 - tmp; i++)
		printf("5");
	    for (i = 0; i < count0; i++)
		printf("0");
	}
    else if (count0 > 0)
	printf("0");
    else
	printf("-1");

    return 0;
}

