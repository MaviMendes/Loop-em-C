#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>
/*FUN��O DESSE PROGRAMA:checa se os numeros digitados s�o primos*/
/*DATA: 20/04/2020*/
main()
{
	setlocale(LC_ALL,"");
  int var,div, eprimo, primosImpressos,n;
 /*vai executar o la�o externo n vezes*/
 printf("\nDigite um n�mero de rep\t"); scanf("%d", &n);
 while(primosImpressos<n) /*LA�O EXTERNO: vari�vel primosImpressos � uma contadora e vai contar quantos numeros primos ser�o impressos durante a execu��o do la�o*/
 {
 	printf("\nDigite um n�mero\t"); scanf("%d", &var);
 	
 div = 2;/*come�a a verificar a div do num a partir de 2, pois td primo � divisivel por 1*/
 eprimo = 1;/*variavel indicadora*/ 
 
 while ((div<= var/2)&& (eprimo))
 {
 	if(var%div == 0)
 	eprimo = 0;
 	div++;
 }
 if(eprimo)
 printf("%d � primo", var);
 else printf("%d n�o � primo", var);
 primosImpressos++;
 }
 
}
