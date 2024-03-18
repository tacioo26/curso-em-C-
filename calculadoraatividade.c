#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float primeiroNumero, segundoNumero;
	float soma, subtracao, multiplicacao, divisao;
	
	printf("Digite o primeiro Numero: ");
	scanf("%f",&primeiroNumero);
	
	fflush(stdin);
	
	printf("Digite o segundo Numero: ");
	scanf("%f",&segundoNumero);
	
	soma = primeiroNumero + segundoNumero;
	subtracao = primeiroNumero - segundoNumero;
	multiplicacao = primeiroNumero * segundoNumero;
	divisao = primeiroNumero / segundoNumero;
	
	system("cls || clear");
	
	
	printf("\n=== Exibindo Resultados ===\n");
	
	printf("soma: %.1f \n", soma);
	printf("subtracao: %.1f \n", subtracao);
	printf("multiplicacao: %.1f \n", multiplicacao);
	printf("divisao: %.1f \n", divisao);
	
	
	return 0;
}
