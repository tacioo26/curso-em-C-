#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "");
    
    
    int numero1, numero2, numero3;
    
    printf("Digite um número: ");
    scanf("%i", &numero1);
    
    numero2 = numero1 + 1;
    numero3 = numero1 - 1;
    
    printf("Resultado: \n");
    printf("O número informado é: %i\n",numero1);
    printf("O sucessor deste número é: %i\n",numero2);
    printf("O antecessor deste número é: %i\n",numero3);
    
    return 0;
    
   

}
	
