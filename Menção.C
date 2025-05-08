/*
Faça um programa que lê as duas notas parciais obtidas por um aluno numa
disciplina ao longo de um semestre, e calcule a sua média.

A atribuição de conceitos obedece à tabela abaixo:
    Média de Aproveitamento  Conceito
    Entre 9.0 e 10.0         A
    Entre 7.5 e 9.0          B
    Entre 6.0 e 7.5          C
    Entre 4.0 e 6.0          D
    Entre 4.0 e zero         E

O algoritmo deve mostrar na tela as notas, a média,
o conceito correspondente e a mensagem “APROVADO” se o conceito for A, B ou C
ou “REPROVADO” se o conceito for D ou E.
*/


#include <stdio.h>
#include <locale.h>
#include <string.h>


int main (){ 
	setlocale(LC_ALL,"Portuguese"); 
	
	
	float n1, n2, media; 
	int i, n; 
	char conceito; 
	
	
	
	printf ("Digite a quantidade de alunos a ser analisada:  "); 
	scanf ("%i", &n);
	
	
	for (i=0; i<n; i++){
		printf ("\t\n Digite a primeira nota do aluno %i: ", i+1 );
		scanf ("%f", &n1); 
		
		printf ("\t\n Digite a segunda nota do aluno %i: ", i+1); 
		scanf ("%f", &n2); 
		
		media = (n1+n2)/2; 
		
		if (media >= 9.0 && media <= 10.0)
			conceito = 'A';
		else if (media >= 7.5 && media < 9.0)
			conceito = 'B';
		else if (media >= 6.0 && media < 7.5)
			conceito = 'C';
		else if (media >= 4.0 && media < 6.0)
			conceito = 'D';
		else if (media<4.0)
			conceito = 'E';
		else 
			printf ("Nota inválida");
			
		printf("\nAluno %i:", i + 1);
		printf("\t\nNota 1: %.2f", n1);
		printf("\t\nNota 2: %.2f", n2);
		printf("\t\nMédia: %.2f", media);
		printf("\t\nConceito: %c", conceito);
		
		if (conceito == 'A' || conceito == 'B' || conceito == 'C')
			printf("\nSituação: APROVADO\n");
		else
			printf("\nSituação: REPROVADO\n");	
	
	}

	return 0; 
}
