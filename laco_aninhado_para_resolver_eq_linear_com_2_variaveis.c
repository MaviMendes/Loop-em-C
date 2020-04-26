#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>
/*FUNÇÃO DESSE PROGRAMA:Determinar todas as soluções inteiras de um sistema linear como
* x1 + x2 = C , com x1,x2,c >=0 e todos inteiros
*/
/*DATA: */
main()
{
	setlocale(LC_ALL,"");
  
  int x1,x2,c;
  
  printf("\nDigite um valor de 'c'\t"); scanf("%d", &c);
  
  for(x1=0; x1<=c; x1++)
   for(x2=0; x2<=c;x2++)
   {
   	if(x1+x2==c)
   	printf("%d + %d = %d\n", x1,x2,c);
   }
}
