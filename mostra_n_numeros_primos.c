#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>
/*FUNÇÃO DESSE PROGRAMA:Mostra os n primeiros números primos*/
/*DATA: 20/04/2020*/
main()
{
	setlocale(LC_ALL,"");
 int divisor, candidato, primosImpressos, n, eprimo;
 
 printf("Digite um número inteiro positivo  ");scanf("%d", &n);
 
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
	candidato++;/*Testa o próximo número candidato a primo*/
 }
}
