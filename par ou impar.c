#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	 
	int numero;
	
	printf("Digite um n�mero: ");
	scanf("%f",&numero);
	
	system("cls");
	
	printf("\n === Exibindo Resultados ===\n");
	
	if (numero % 2 == 0) {
		printf("Par.");
	} else {
		printf("�mpar.");
	}
	
	return 0;
	
}
