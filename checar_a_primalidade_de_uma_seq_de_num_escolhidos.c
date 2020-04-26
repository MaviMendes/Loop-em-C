#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>
/*FUNÇÃO DESSE PROGRAMA:checa se os numeros digitados são primos*/
/*DATA: 20/04/2020*/
main()
{
	setlocale(LC_ALL,"");
  int var,div, eprimo, primosImpressos,n;
 /*vai executar o laço externo n vezes*/
 printf("\nDigite um número de rep\t"); scanf("%d", &n);
 while(primosImpressos<n) /*LAÇO EXTERNO: variável primosImpressos é uma contadora e vai contar quantos numeros primos serão impressos durante a execução do laço*/
 {
 	printf("\nDigite um número\t"); scanf("%d", &var);
 	
 div = 2;/*começa a verificar a div do num a partir de 2, pois td primo é divisivel por 1*/
 eprimo = 1;/*variavel indicadora*/ 
 
 while ((div<= var/2)&& (eprimo))
 {
 	if(var%div == 0)
 	eprimo = 0;
 	div++;
 }
 if(eprimo)
 printf("%d é primo", var);
 else printf("%d não é primo", var);
 primosImpressos++;
 }
 
}
