	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>

	
	/*FUN��O DESSE PROGRAMA:Tri�ngulo de Floyd*/
	/*DATA: 26/04 */
	
	main()
	{ setlocale(LC_ALL,"");
	  int i,j,n,c=0;/*vari�vel que ser� incrementada dentro do la�o interno 
	  e que vai ter seus valores lidos*/
	  printf("Digite um n�mero de repeti��es\n");
	  scanf("%d",&n);
	  for(i=1;i<=n;i++)/*i representa o n�mero da linha*/
	  {
	  	for(j=1;j<=i;j++)/*j representa o n�mero de elementos em uma linha, s�o i elementos por linha*/
		  {
		   c++;/*c guarda o valor a ser impresso em seguida*/
	  	   printf("%d\t",c);
		  }
	  	
	  	printf("\n");
	  }
	 
	 
}

