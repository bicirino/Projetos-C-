// Projeto - Simulador de investimentos - EM CONSTRUÇÃO 

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese"); 
	
	
	int esc, modelo, tempo; 
	char ResAporte; 
	float taxa, capital, aporte,  montante; 
	
	
	
	
	printf("Bem-vindo ao Simulador de Investimentos.Digite o número da opção que você deseja calcular: \n");
	
	printf("\nDigite 1 - para TESOURO SELIC");
	printf("\nDigite 2 - para TESOURO IPCA");
	printf("\nDigite 3 - para POUPANÇA");
	printf("\nDigite 4 - para CDB");
	printf("\nDigite 5 - para LCI/LCA");
	printf("\nDigite 6 - para RENDIMENTO PERSONALIZADO");
	printf("\nDigite 7 - para SAIR");
	
	printf("\n\t->");
	scanf ("%i", &esc);
	
	switch (esc){
		case 1: 
		
		break; 
		
		case 2: 
		
		break;
		
		case 3: 
		
		break;
		
		case 4:
			
		break; 
		
		case 5: 
		
		break; 
		
		case 6: 
			printf("\nDigite 1 - para utilização de JUROS SIMPLES");
			printf("\nDigite 2 - para utilização de JUROS COMPOSTOS"); 
			
			printf("\n\t->");
			scanf("%i", &modelo); 
			
			printf("\nDigite o tempo (em meses) da operação: ");
			scanf("%i", &tempo); 
			
			printf("\nVocê fará algum aporte durante o investimento? (S ou N): "); 
			scanf ("%s", &ResAporte); 
			
			if (ResAporte == 'S'){
				printf("\nDigite o valor do aporte mensal: "); 
				scanf ("%f", &aporte); 
			}
			
			printf("\nDigite a taxa que será utilizada no rendimento(Desconsidere o símbolo de 'porcento): ");
			scanf("%f", &taxa); 
			
			printf("\nQual valor do capital - valor inicial - do investimento?: "); 
			scanf("%f", &capital); 
			
			if (modelo == 1 ){
				montante = 
			}
			
		
		break; 
		
		case 7: 
		
		break; 
	}
	
	return 0; 
}
