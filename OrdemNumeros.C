#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
	
	int numeros[10], i, j, aux;

    
    
	printf ("Digite sua lista de 10 números inteiros: \n "); 
	
	for(i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    // Ordenar em ordem crescente 
    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            if(numeros[i] > numeros[j]) {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    // Mostrar os números ordenados
    for(i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
   
    }

    return 0;
}

