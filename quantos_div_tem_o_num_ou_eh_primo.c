#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>

main()/*programa que fala se os n�meros digitados est�o em ordem ou n�o*/
{
	setlocale(LC_ALL,"");
 int i, n, div;
 printf("Digite um n�mero n  ");
 scanf("%d", &n);
 div = 0;
 for(i=1; i<=n; i++)
 {
 	if(n%i==0) 
 	div = div +1;
 }
 if(div==2) printf("%d � primo e tem 2 divisores: 1 e ele mesmo",n);
  else printf("N�o � primo e %d tem %d divisores",n,div);
}

