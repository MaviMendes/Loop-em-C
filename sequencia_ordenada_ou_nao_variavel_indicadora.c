#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>

main()/*programa que fala se os n�meros digitados est�o em ordem ou n�o*/
{
	setlocale(LC_ALL,"");
 int i, n, atual, anterior, ordenado;
 printf("Digite um valor de n: "); scanf("%d", &n);
 scanf("%d", &anterior);
 i=1; /*leu um numero*/
 
 ordenado = 1;/*ordenado: vari�vel indicadora*/
 while((i<n)&& ordenado){
 	scanf("%d", &atual);
 	i++;
 	if(atual<anterior)
 	 ordenado = 0;
 	 anterior = atual;
 }
 if(ordenado)
 printf("Sequ�ncia ordenada\n");
 else printf("Sequ�ncia n�o ordenada\n");
}

