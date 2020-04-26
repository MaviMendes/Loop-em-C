	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>

	
	/*FUNÇÃO DESSE PROGRAMA:Triângulo de Floyd*/
	/*DATA: 26/04 */
	
	main()
	{ setlocale(LC_ALL,"");
	  int i,j,n,c=0;/*variável que será incrementada dentro do laço interno 
	  e que vai ter seus valores lidos*/
	  printf("Digite um número de repetições\n");
	  scanf("%d",&n);
	  for(i=1;i<=n;i++)/*i representa o número da linha*/
	  {
	  	for(j=1;j<=i;j++)/*j representa o número de elementos em uma linha, são i elementos por linha*/
		  {
		   c++;/*c guarda o valor a ser impresso em seguida*/
	  	   printf("%d\t",c);
		  }
	  	
	  	printf("\n");
	  }
	 
	 
}

