#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "");
    
    
    int numero1, numero2, numero3;
    
    printf("Digite um n�mero: ");
    scanf("%i", &numero1);
    
    numero2 = numero1 + 1;
    numero3 = numero1 - 1;
    
    printf("Resultado: \n");
    printf("O sucessor deste n�mero �: %i\n",numero2);
    printf("O antecessor deste n�mero �: %i\n",numero3);
    
    return 0;
    
   

}
	
