/*
ID: luckyshq
LANG: C
TASK: gift1
*/

#include <stdio.h>
#include <string.h>

main(){
    FILE *fin = fopen("gift1.in", "r");
    FILE *fout = fopen("gift1.out", "w");

    int NP;
    fscanf(fin, "%d", &NP);
    
    char name[NP+10][20];
    int money[NP+10];
    int given, number_of_people;
    memset(money, 0, NP+100);
    int i, j, k;
    char current[20];
    int number;
    for (i = 0; i < NP; i++)
	fscanf(fin, "%s", &name[i]);
    
    for (i = 0; i < NP; i++)
	{
	    fscanf(fin, "%s", &current);
	    fscanf(fin, "%d%d", &given, &number);
	    if (number != 0)
	    {
		for (j = 0; j < NP; j++)
		{
		    if (!strcmp(name[j], current))
		    {
			money[j] -= (given / number) * number;
		    }
		}
		for (j = 0; j < number; j++)
		{
		    fscanf(fin, "%s", &current);
		    for (k = 0; k < NP; k++)
		    {
			if (!strcmp(name[k], current))
			{
			    money[k] += given / number;
			}
		    }
		}
	    }
	}
    for (i = 0; i < NP; i++){
	fprintf(fout, "%s %d\n", name[i], money[i]);
    }

    exit(0);
}
