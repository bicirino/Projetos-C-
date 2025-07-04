// Projeto - Simulador de investimentos 

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <stdlib>

int main (){
	setlocale(LC_ALL,"Portuguese"); 
	
	
	int esc, modelo, tempo; 
	float taxa, capital, aporte, montante; 
	
	float Selic, SelicDiaria; 
	int diasUteis;
	
	float Ipca, rendimento; 
	
	
	
	printf("Bem-vindo ao Simulador de Investimentos.Digite o número da opção que você deseja calcular: \n");
	
	printf("\nDigite 1 - para TESOURO SELIC");
	printf("\nDigite 2 - para TESOURO IPCA");
	printf("\nDigite 3 - para POUPANÇA");
	printf("\nDigite 4 - para CDB");
	printf("\nDigite 5 - para RENDIMENTO PERSONALIZADO");
	printf("\nDigite 6 - para SAIR");
	
	printf("\n\t->");
	scanf ("%i", &esc);
	
	switch (esc){
		case 1: 
			printf("\nDigite o valor atual da Taxa Selic (Desconsidere o símbolo de porcentagem): "); 
			scanf("%f", &Selic); 
			Selic = Selic*100; 
			
			SelicDiaria = pow((1+Selic), 1.0/252) - 1; 
 
			printf("\nDigite o valor do capital da operação: ");
			scanf ("%f", &capital); 
			
			printf("\nDigite o tempo (em meses)da operação? ");
			scanf("%i", &tempo); 
			
			DiasUteis = tempo*21; 
			
			
			montante = capital * pow ((1+SelicDiaria), DiasUteis); 
		
			printf("O valor do montante final em %i meses será de: R$ %.2f ", tempo, montante ); 
		
		break; 
		
		case 2: 
			printf("\nDigite o IPCA anual: ");
			scanf ("%f", &Ipca); 
			
			printf("\nDigite o valor do capital da operação:"); 
			scanf("%f", &capital); 
			
			printf("\nDigite a taxa adicional fixa do regime: "); 
			scanf("%f", &taxa); 
		
			montante = capital * pow((1 + Ipca) * (1 + taxa/100), tempo);
			
			printf("O valor do montante final em %i meses será de: R$ %.2f ", tempo, montante ); 
			
			
			
		break;
		
		case 3: 
			
			printf ("\nDigite o capital do investimento: "); 
			scanf("%f", &capital); 
			
			printf ("\nDigite o tempo em meses da operação: ");
			scanf("%i", &tempo); 
			
			printf("\nDigite a taxa da operação: ");
			scanf ("%f", &taxa); 
			
			printf ("\nDigite a taxa Selic mensal(desconsiderado o símbolo de porcentagem)");
			scanf ("%f", &Selic);
			
			if (Selic>8.5){
				rendimento = (0.5/100) + taxa; 
			}else { 
				rendimento = Selic*0.7; 
			}
		
			montante = capital + rendimento; 
		
			printf("O valor do montante final em %i meses será de: R$ %.2f ", tempo, montante ); 
		
		
		break;
		
		case 4:
			printf("\nDigite o valor do capital da operação: ");
			scanf("%f", &capital); 
			
			printf("\nDigite a taxa de juros da operação: ");
			scanf("%f", &taxa);
			taxa = taxa/100; 
			
			printf ("\nDigite o tempo, em meses, da operação: "); 
			scanf("%i", &tempo); 
					
			montante = capital* pow((1+taxa), tempo); 
			
			printf("O montante da operação, no período de %i meses, é: R$ %.2f", tempo, montante); 
			
		break; 
		
		
		
		case 5: 
			printf("\nDigite 1 - para utilização de JUROS SIMPLES");
			printf("\nDigite 2 - para utilização de JUROS COMPOSTOS"); 
			
			printf("\n\t->");
			scanf("%i", &modelo); 
			
			printf("\nDigite o tempo (em meses) da operação: ");
			scanf("%i", &tempo); 
			
			printf("\nQual aporte mensal do o investimento? (caso não haja aporte mensal digite '0'): "); 
			scanf ("%f", &aporte); 
			
			
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
			
			printf("\nO valor final da operação em %i meses será de: R$ %.2f ", tempo, montante);
		
		break; 
		
		case 6: 
			printf("Programa encerrado!"); 
			exit(0); 
		
		break; 
	}
	
	return 0; 
}
