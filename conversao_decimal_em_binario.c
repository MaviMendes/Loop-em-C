#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>
/*FUNÇÃO DESSE PROGRAMA:converter decimal em binário*/
/*DATA:20/04 */
main()
{
	setlocale(LC_ALL,"");
  int n, digito;
  
  printf("Digite um numero decimal: "); scanf("%d", &n);
  printf("%d (10) -> ",n);
  while(n!=0)
  { 
  	digito = n%2;
  	printf("%d", digito);/*imprime o num binario ao contrario. Para ler o valor correto, ler da direita pra esquerda*/
  	n = n/2;
  }
 printf("(2)");

}
