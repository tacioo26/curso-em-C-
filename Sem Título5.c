#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	
	int i, numero, soma = 0;
	
	for(i = 1; i <= 5; i++){
		printf("Digite o número: ", 1);
		scanf("%i",&numero);
		
		soma = soma + numero;
	}
    
    printf("Soma: %i \n", soma);
		
	return 0;
}
