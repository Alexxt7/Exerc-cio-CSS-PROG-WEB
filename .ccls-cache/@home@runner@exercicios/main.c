#include <stdio.h>

int main(){
	//variáveis
	  int numero, soma = 0;
  
	  for(int i = 0; i < 3; i++){
	//entrada
		printf("Informe um número: ");
		scanf("%d", &numero);

	//processamento
		soma = soma + numero;
	}
	
	//saída
	  printf("A soma é %d", soma);
  
  return 0;
  }