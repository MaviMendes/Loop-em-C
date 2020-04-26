#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>

main()/*programa que fala se os números digitados estão em ordem ou não*/
{
	setlocale(LC_ALL,"");
 int i, n, atual, anterior, ordenado;
 printf("Digite um valor de n: "); scanf("%d", &n);
 scanf("%d", &anterior);
 i=1; /*leu um numero*/
 
 ordenado = 1;/*ordenado: variável indicadora*/
 while((i<n)&& ordenado){
 	scanf("%d", &atual);
 	i++;
 	if(atual<anterior)
 	 ordenado = 0;
 	 anterior = atual;
 }
 if(ordenado)
 printf("Sequência ordenada\n");
 else printf("Sequência não ordenada\n");
}

