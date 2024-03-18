#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	float salario, quantidadeSalarios, salarioMinimo = 1412.00;
	
	
	printf("Digite o valor do seu salario:  ");
	scanf("%f",&salario);
	
	quantidadeSalarios = salario / salarioMinimo;
	
	system("cls");
	
	printf("Exibindo Resultado ===\n");
	printf("Salário Informado: %.2f \n",salario);
	printf("Quantidade de salários: %.1f \n", quantidadeSalarios);
			

	return 0;
	
}
