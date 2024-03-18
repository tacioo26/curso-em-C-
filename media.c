#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome[200];
	int idade;
	float nota1, nota2, nota3, nota4, media;
	
	
	//Solicitando de dados
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	prinf("Digite a primeira nota: ");
	scanf("&f",&nota1);
	
	prinf("Digite a segunda nota: ");
	scanf("&f",&nota2);
	
	prinf("Digite a terceira nota: ");
	scanf("&f",&nota3);
	
	prinf("Digite a quarta nota: ");
	scanf("&f",&nota4);
	
	system("cls");
	
	//processar
	media = (nota1 + nota2 + nota3 + nota4)/4;
	
	//saida do resultado
	printf("\n=== Exibindo Resultados ===\n");
	printf("Nome: %s \n", nome);
	printf("Idade: %i \n", idade);
	printf("Primeira Nota: %.2f\n", nota1);
	printf("Segunda Nota: %.2f\n", nota2);
	printf("Terceira Nota: %.2f\n", nota3);
	printf("Quarta Nota: %.2f\n", nota4);
	printf("Media do aluno: %.2f\n", media);
	
	return 0;
	
}
