#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	//variaveis
	float valor, desconto, valorFinal;
	
	printf("Digite o valor desejado: ");
	scanf("%f", &valor);
	
	desconto = valor * 0.1;
	valorFinal = valor - desconto;
	
	system("cls");
	
	
	
	
	printf("\n=== Exibindo Resultados: ===\n");
	printf("Valor Informado: R$ %.2f \n", valor);
	printf("Valor do Desconto: %.2f\n", desconto);
	printf("Valor Final: R$ %.2f\n", valorFinal);
	
	return 0;
	
	
}
