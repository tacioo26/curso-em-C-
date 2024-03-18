#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome[200];
	int idade;
	float primeiraNota, segundaNota, terceiraNota, quartaNota;
	float soma, media;
	
	
	
	//Solicitando de dados
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	fflush(stdin);
	
	printf("Digite a primeira nota: ");
	scanf("%f",&primeiraNota);
	fflush(stdin);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&segundaNota);
	fflush(stdin);
	
	printf("Digite a terceira nota: ");
	scanf("%f",&terceiraNota);
	fflush(stdin);
	
	printf("Digite a quarta nota: ");
	scanf("%f",&quartaNota);
	

	
	//processar
	soma = primeiraNota + segundaNota + terceiraNota + quartaNota;
	media = soma / 4;
	
	system("cls || clear");
	
	//saida do resultado
	printf("\n=== Exibindo Resultados ===\n");
	printf("Nome: %s \n", nome);
	printf("Idade: %i \n", idade);
	printf("Primeira Nota: %.1f \n", primeiraNota);
	printf("Segunda Nota: %.1f \n", segundaNota);
	printf("Terceira Nota: %.1f \n", terceiraNota);
	printf("Quarta Nota: %.1f \n", quartaNota);
	printf("Media do aluno: %.1f \n", media);
	
	return 0;
	
}
