#include <stdio.h>

int main(int argc, char *argv[])
{
    freopen("input", "r", stdin);
    int n, m;
    int i, j, k;
    int v = 0;
    int correct_min = 100;
    int wrong_max = 0;
    int wrong_min = 100;

    scanf("%d%d", &n, &m);
    int a[n];
    int b[m];
    for (i = 0; i< n; i++)
	{
	    scanf("%d", &a[i]);
	    if (v < a[i])
		{
		    v = a[i];
		}
	    if (correct_min > a[i])
		{
		    correct_min = a[i];
		}
	}
    for (i = 0; i < m; i++)
	{
	    scanf("%d", &b[i]);
	    if (wrong_max < b[i])
		{
		    wrong_max = b[i];
		}
	    if (wrong_min > b[i] )
		{
		    wrong_min = b[i];
		}
	}
    
    if (correct_min*2 < wrong_min && wrong_min > v)
	{
	    if (correct_min*2 < v)
		printf("%d", v);
	    else
		printf("%d", correct_min*2);
	}else
	printf("-1");
    return 0;

}
