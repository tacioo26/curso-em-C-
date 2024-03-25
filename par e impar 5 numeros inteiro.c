#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	
	int i, numero, pares = 0, impares = 0;
	
	for(i = 1; i <= 5; i++){
		printf("números: ", i);
		scanf("%i",&numero);
		
		if (numero % 2 == 0) {
			pares++;
		} else {
			impares++;
		}
    }
    
    printf("\n=== Exibindo resultados ===\n");
    printf("Pares: %i \n", pares);
    printf("Impares: %i", impares);
    
    
	return 0;	
}
