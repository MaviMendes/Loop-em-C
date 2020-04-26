#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>

main()/*programa que imprime os n primeiros numeros da serie de fibonacci*/
{
	setlocale(LC_ALL,"");
 int n, fat, fant, faux, cont;
 
 printf("Digite um número  "); scanf("%d",&n);
 
 cont = 1; fant=0; fat=1;
 while (cont<=n)
 {
 	printf("%d\t", fat);
 	faux=fat;
 	fat = fat+fant;
 	fant = faux;
 	cont ++;
 }
 printf("\n");

}
