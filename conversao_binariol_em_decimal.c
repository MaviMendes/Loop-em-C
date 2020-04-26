	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	#include <math.h>
	#include <time.h>
	#include <string.h>
	
	main()
	{
		setlocale(LC_ALL,"");
	  int n, soma, pot,digito;
	  
	  printf("Digite um número em binário\t"); scanf("%d", &n);
	  soma = 0; pot = 1;
	  while(n!=0)	
	  {
	  	digito = n%10;
	   	n = n/10; 
	   	soma = soma + (digito*pot);
	  	pot = pot*2;
	  }
	  
	  printf("\nO valor em decimal é %d", soma);
	

}
