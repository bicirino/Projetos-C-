// Projeto - Simulador de investimentos 

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL,"Portuguese"); 
	
	
	int esc, modelo, tempo; 
	float taxa, capital, aporte,  montante; 
	
	float Selic, SelicDiaria; 
	
	
	
	
	
	
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
			printf("\nDigite o valor atual da Taxa Selic (Desconsidere o símbolo de porcentagem): "); 
			scanf("%f", &Selic*100); 
			
			SelicDiaria = pow((1+Selic), 1/252) - 1; 
 
		
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
			
			printf("\nQual aporte mensal do o investimento? (caso não haja aporte mensal digite '0'): "); 
			scanf ("%s", &aporte); 
			
			
			printf("\nDigite a taxa que será utilizada no rendimento(Desconsidere o símbolo de 'porcento): ");
			scanf("%f", &taxa); 
			
			printf("\nQual valor do capital - valor inicial - do investimento?: "); 
			scanf("%f", &capital); 
			
			if (modelo == 1 ){
				montante = capital *(1+(taxa/100)*tempo)+aporte*(((1+(taxa/100)*tempo)-1)/(taxa/100)); 
				
				printf ("\nO valor final da operação em %i meses será de: R$ %.2f ", tempo, montante); 
			
			}else if (modelo == 2){
				montante = capital * pow(1 + taxa / 100.0, tempo) + aporte * ( (pow(1 + taxa / 100.0, tempo) - 1) / (taxa / 100.0) );
			
			
			}else{
				printf("O sistema escolhido não foi reconhecido"); 
			}
			
		
		break; 
		
		case 7: 
		
		break; 
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0; 
}
