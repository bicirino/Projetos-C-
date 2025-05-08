// Código simples porém envolvendo funções 

#include <stdio.h>
#include <locale.h>

void dia(int numero) {
    if (numero == 1)
        printf("Domingo\n");
    else if (numero == 2)
        printf("Segunda\n");
    else if (numero == 3)
        printf("Terça\n");
    else if (numero == 4)
        printf("Quarta\n");
    else if (numero == 5)
        printf("Quinta\n");
    else if (numero == 6)
        printf("Sexta\n");
    else if (numero == 7)
        printf("Sábado\n");
    else
        printf("Valor inválido\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Digite um número de 1 a 7: ");
    scanf("%i", &numero);

    dia(numero);

    return 0;
}
