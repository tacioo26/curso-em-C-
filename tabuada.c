#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int i;
	
	
	printf("\nTabuada de multiplicação do número 2 \n");
	for(i = 1; i <= 10; i++){
		printf("%d x %d = %d \n", 2, i, i*2);
			
	}
	
	printf("\nTabuada de multiplicação do número 3 \n");
	for(i = 1; i <= 10; i++){
		printf("%d x %d = %d \n", 3, i, i*3);
		
}


printf("\nTabuada de multiplicação do número 5 \n");
	for(i = 1; i <= 10; i++){
		printf("%d x %d = %d \n", 5, i, i*5);
		
}


	return 0;
}
