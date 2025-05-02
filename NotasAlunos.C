
#include <stdio.h>
#include <string.h>
#include <locale.h>



int main (){
	setlocale(LC_ALL,"Portuguese");
	
	float n1, n2, n3, n4, mediafinal, media_necessaria; 
	
	int num_alunos;
	
	int i;
	
	 
	
	printf ("Qual número de alunos que deseja armazenar os dados: "); 
	scanf ("%i", &num_alunos); 
	
	printf ("Qual média final necessária para a aprovação ?: ");
	scanf ("%f", &media_necessaria);
	
	for (i= 1; i<num_alunos+1; i++){
		printf ("\nInsira dos dados do aluno %i:\n ", i );
		
		printf ("\t Nota 1:  ");
		scanf ("%f",&n1); 
		
		printf ("\t Nota 2:  ");
		scanf ("%f",&n2); 
		
		printf ("\t Nota 3:  ");
		scanf ("%f",&n3); 
		
		printf ("\t Nota 4:  ");
		scanf ("%f",&n4); 
		
		mediafinal = (n1+n2+n3+n4)/4;
		
		
		printf ("\tA média final do aluno %i é:  %.2f ", i, mediafinal); 
		
		if (mediafinal >= media_necessaria ){
			printf ("Aprovado");
		}else{
			printf ("Reprovado");
		}
		
		
		printf ("\n ________________________________________ \n "); 
		
		
	}
	
	
	return 0; 
}
