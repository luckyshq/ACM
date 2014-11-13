/*
ID: luckyshq
LANG: C
TASK: ride
*/
#include <stdio.h>
#include <ctype.h>

main(){
    FILE *fin = fopen("ride.in", "r");
    FILE *fout = fopen("ride.out", "w");
    char comet[100];
    char group[100];

    fgets(comet, sizeof comet, fin);
    fgets(group, sizeof group, fin);
    
    int i, total_c = 1, total_g = 1;
    
    for (i = 0; comet[i] && isupper(comet[i]); i++)
	total_c = ((comet[i] - 'A' + 1) * total_c) % 47;
    
    for (i = 0; group[i] && isupper(group[i]); i++)
	total_g = ((group[i] - 'A' + 1) * total_g) % 47;
    
    if (total_c == total_g)
	{
	    fprintf(fout, "GO\n");
	}else
	fprintf(fout, "STAY\n");
	    
    exit(0);
}
