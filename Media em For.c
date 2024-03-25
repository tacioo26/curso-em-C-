#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float nota, soma, media;
	int i;
    
    for(i = 1; i <= 4; i++) {
    	printf("Digite 4 Notas: ", i);
    	scanf("%f",&nota);
    	
    	soma = soma + nota;
	}
	
	media = soma / 4;
	
	printf("\n=== Exibindo Resultados ===\n");
	printf("Media %.1f \n", media);
	
	return 0;
	
}
