#include <stdio.h>
#include <locale.h>

int main (){
	
	int i;
	
	printf("Mostrando Resultado, números pares entre 100 e 200: \n");
	for(i = 100; i <= 200; i++) {
		if (i % 2 == 0) {
			printf("%d \n", i);
		}
		
	}
	
	return 0;
}
