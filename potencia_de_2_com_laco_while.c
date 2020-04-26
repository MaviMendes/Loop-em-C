#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>

main()
{
	setlocale(LC_ALL,"");
	
	
int i, n, pot;

printf("digite n  "); scanf("%d", &n);
pot = 1;
i=0;
while(i<=n){
	printf("2^%d = %d\n",i, pot);
	pot = pot*2;
	i++;
}


}
