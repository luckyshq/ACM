#include <stdio.h>

int main(int argc, char *argv[])
{
    freopen("input", "r", stdin);
    int k, d;
    int i, j;
    int tmp = 0;
    scanf("%d%d", &k, &d);
    if (d%2 == 0)
	{
	    if (d != 0 && k >= 2)
		{
		    printf("%d%d", d/2, d/2);
		    for (i = 0; i < k-2; i++)
			{
			    printf("0");
			}
		}else if (d == 0 && k == 1)
		{
		    printf("0");
		}else
		printf("No solution");
		
	}else
	{
	    printf("%d", d);
	    for (i = 0; i < k-1; i++)
		{
		    printf("0");   
		}
	}
    return 0;
}
