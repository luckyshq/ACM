#include <stdio.h>

int main(int argc, char *argv[])
{
    int m, x, y, i, j;
    int point = 0;
    int total = 0;
    int rest;
    int flag = 0;
    scanf("%d", &m);
    int c[m];

    for (i = 0; i < m; i++)
	{
	    scanf("%d", &c[i]);
	}
    for (i = 0; i < m; i++)
	{
	    total += c[i];
	}
    scanf("%d%d", &x, &y);
    for (i = 0; i < m; i++)
	{
	    point += c[i];
	    rest = total - point;
	    if (point >= x && point <= y && rest >= x && rest <= y)
		{
		    printf("%d", i+2);
		    flag = 1;
		    break;
		}else if (point > y)
		{
		    flag = 1;
		    printf("0");
		    break;
		}
	}
    if (flag == 0)
	{
	    printf("0");
	}
    return 0;
}
