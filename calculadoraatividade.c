#include <stdio.h>

int main(){
	
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
	
	printf("soma:%f\n", soma);
	printf("subtracao:%f\n", subtracao);
	printf("multiplicacao:%f\n", multiplicacao);
	printf("divisao:%f\n", divisao);
	
	
	return 0;
}
