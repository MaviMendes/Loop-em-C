#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>
/*FUN��O DESSE PROGRAMA:Mostra os n primeiros n�meros primos*/
/*DATA: 20/04/2020*/
main()
{
	setlocale(LC_ALL,"");
 int divisor, candidato, primosImpressos, n, eprimo;
 
 printf("Digite um n�mero inteiro positivo  ");scanf("%d", &n);
 
 candidato = 2;
 primosImpressos = 0;
 while(primosImpressos<n) 
 {
 	divisor = 2;
 	eprimo = 1;
 	while((divisor<= candidato/2) && (eprimo))
 	{
 	 if(candidato%divisor == 0)	
 	 eprimo = 0;
 	 divisor++;
    }
    if(eprimo)
    {
    	printf("%d ", candidato);
    	primosImpressos++;
	}
	candidato++;/*Testa o pr�ximo n�mero candidato a primo*/
 }
}
