
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale (LC_ALL, "Portuguese"); 
// Calculadora que calcula taxa metabólica basal e sugere opções de macronutrientes e suas respectivas estratégias 

int unidade; 

int genero; 
float peso; 
int altura; 
int idade; 

int atividades; 
float fator; 





printf ("Seja bem-vindo à calculadora de taxa metabólica basal e ao organizador de macronutrientes alimentares \n  ");

printf("Qual tipo de unidade deseja usar ?:  \n");

printf("Digite 1 - Peso:Kg / Altura:cm \n"); 
printf("Digite 2 - Peso:lbs / Altura: fts \n "); 
scanf ("%i", &unidade); 

switch (unidade){
	case 1: 
	   printf ("Digite 1 - para HOMEM \n"); 
	   printf ("Digite 2 - para MULHER \n"); 
	   scanf("%i", &genero ); 
	      
	   printf("Digite sua idade (anos) :  \n ");
	   scanf ("%i", &idade );
	   
	   printf("Digite seu peso (kg's) :    \n"); 
	   scanf ("%2f", &peso );
	   
	   printf("Digite sua altura (cm's) :  \n");
	   scanf ("%i", &altura);
	   
	   printf("Digite seu nível de atividade físicas semanais:   \n");
	   printf("Digite 1 - para SEDENTÁRIOS (pouco ou nenhum exercício semanal ) \n "); 
	   printf("Digite 2 - para LEVEMENTE ATIVO (exercício leve 1 a 3 dias por semana)\n"); 
	   printf("Digite 3 - para MODERADAMENTE ATIVO (exercício moderado ou esportes 3 a 5 dias por semana)\n"); 
	   printf("Digite 4 - para ALTAMENTE ATIVO (exercício pesado ou esportes 5 a 6 dias por semana)\n"); 
	   printf("Digite 5 - para EXTREMAMENTE ATIVO (exercício pesado ou esportes todo dia ou ate 2 vezes ao dia )\n"); 
	   scanf ("%i", &atividades );
	   
	   switch (atividades){
	      case 1:
	       fator  = 1.2; 
	       break; 
	       
	      case 2: 
	       fator = 1.375; 
	       break; 
	      
	      case 3: 
	       fator = 1.55; 
	       break; 
	      
	      case 4: 
	       fator = 1.725; 
	       break; 
	       
	     case 5:
	       fator = 1.9;
	       break; 
		 
		 default: 
		   printf ("Valor não reconhecido, tente novamente");
		   break; 
		 
		
		} 
	   
        int taxa = 88 + (13.397*peso)+(4.8*altura)-(5.677*idade);
        int taxamet = (taxa*fator); 
	    
	    int taxamulher = 655 + (9.6*peso)+(1.8*altura)-(4.7*idade);
	    int taxafinalmulher = (taxamulher*fator);
		int escolhabulk; 
	    int escolhacut;
	        
		int quantidadecarbsujo = (taxamet*0.5)/4;
	    int quantidadecarbmod = (taxamet*0.35)/4;    // Carboidratos Bulking 
	    int quantidadecarblow = (taxamet*0.2)/4;
			  
		int quantidadeprotsujo = (taxamet*0.3)/4; 
		int quantidadeprotmod = (taxamet*0.3)/4;     // Proteinas Bulking 
		int quantidadeprotlow = (taxamet*0.4)/4; 
			  
		int quantidadegordsujo =(taxamet*0.2)/9;
		int quantidadegordmod = (taxamet*0.35)/9;   // Gorduras Bulking 
		int quantidadegordlow = (taxamet*0.4)/9;
			  
		int quantidadecaloriacut = (taxamet-500);
			  
		int quantidadecarbcut = (quantidadecaloriacut*0.35)/4;          // Macronutrietes do Cutting 
		int quantidadeprotcut = (quantidadecaloriacut*0.3)/4;
		int quantidadegordcut = (quantidadecaloriacut*0.35)/4;
		
		
		switch (genero){
		  case 1: 
		    printf ("taxa metabólica = %i kcal por dia \n  ", taxamet); 
		    printf ("------------------------------------------------------------------------------  \n ");
		    
		    
		    int estrategiadieta;  
		
	        printf  ( "Você deseja fazer um Bulking (ganho de massa) ou um Cutting (perda de massa) ?: \n ");
	        printf ("Digite 1 - para BULKING \n ");
	        printf ("Digite 2 - para CUTTING \n "); 
	        scanf ("%i", &estrategiadieta);
	        fflush (stdin); 
	
	    
			switch (estrategiadieta){
	          case 1: 
	           printf ("Voce deseja fazer um bulking SUJO(ganho rapido de massa porem com mais gordura), MODERADO (ganho de massa e gordura moderados) ou BAIXO (ganho de massa mais lento porem com menos gorduras) \n ");
	   
	           printf ("Digite 1 - para SUJO \n ");
	           printf ("Digite 2 - para MODERADO \n ");
	           printf ("Digite 3 - para BAIXO \n ");
	           scanf("%i",&escolhabulk);
	           fflush (stdin); 
	          
	          
			  
			     switch (escolhabulk){
	               case 1: 
	                printf ("Voce deve ingerir %i g de carboidratos \n ", quantidadecarbsujo);
	                printf ("Voce deve ingerir %i g de proteina \n ", quantidadeprotsujo);
	                printf ("Voce deve ingerir %i g de gordura \n ", quantidadegordsujo);
	                printf ("------------------------------------------------------------------------------ \n ");
	                break; 
	             
	               case 2: 
	                printf ("Voce deve ingerir %i g de carboidratos \n ", quantidadecarbmod);
	                printf ("Voce deve ingerir %i g de proteina\n ", quantidadeprotmod);
	                printf ("Voce deve ingerir %i g de gordura \n ", quantidadegordmod);
	                printf ("------------------------------------------------------------------------------ \n ");
	                break; 
	            
	               case 3: 
	                printf ("Voce deve ingerir %i g de carboidratos \n ", quantidadecarblow);
	                printf ("Voce deve ingerir %i g de proteina \n ", quantidadeprotlow);
	                printf ("Voce deve ingerir %i g de gordura \n ", quantidadegordlow);
	                printf ("------------------------------------------------------------------------------ \n ");
	                break; 
	             
	               default: 
	                printf ("Erro");
	                break; 
	            break;  
	                }
	  
	  
		    case 2: 
			 printf ("Os macronutrientes refletirão um deficit de 500 calorias - o que seria um cutting saudavel sem perda de massa magra \n ");
			 printf ("Voce deve ingerir cerca de %i kcal  \n ", quantidadecaloriacut);
			 
			 printf ("Voce deve ingerir %i g de carboidratos \n ", quantidadecarbcut);
	         printf ("Voce deve ingerir %i g de proteina \n ", quantidadeprotcut);
	         printf ("Voce deve ingerir %i g de gordura \n ", quantidadegordcut);
	         printf ("------------------------------------------------------------------------------ \n ");
			 
			 
			 break; 
			
			default: 
			 printf ("Erro");
			 break;
			 
		 	 
			
	    }
			
			break;
		  case 2: 
		    printf ("taxa metabolica = %i kcal por dia", taxafinalmulher);
		    
			
			
			
			
			
			
			
			break; 
		
		default: 
		   printf("comando não reconhecido, tente novamente");
		   break; 
		break;    
		}
	
	   
	   
	   
	   
	int pesolbs; 
	int alturapes; 
	int alturapolegada; 
	
	case 2: 

       printf ("Digite 1 - para HOMEM \n"); 
	   printf ("Digite 2 - para MULHER \n"); 
       scanf ("%i", &genero );

       printf ("Digite sua idade (anos) :  \n ");
	   scanf ("%i", &idade );
       
       printf ("Digite seu peso (lbs): \n");
       scanf ("%i", &pesolbs);
       
       printf ("Digite sua altura (digite aqui apenas pes) : \n");
       scanf ("%i", &alturapes);
       
       printf ("Digite o complemento da altura (digite aqui as polegadas : ) \n");
       scanf ("%i", &alturapolegada);
       
	   int pesobr = (pesolbs*0.4536);
       int alturabr = (alturapes*30.48)+ (alturapolegada*2.54);
	   
	   printf("Digite seu nível de atividade físicas semanais:   \n");
	   printf("Digite 1 - para SEDENTARIOS (pouco ou nenhum exercício semanal ) \n "); 
	   printf("Digite 2 - para LEVEMENTE ATIVO (exercicio leve 1 a 3 dias por semana)\n"); 
	   printf("Digite 3 - para MODERADAMENTE ATIVO (exercicio moderado ou esportes 3 a 5 dias por semana)\n"); 
	   printf("Digite 4 - para ALTAMENTE ATIVO (exercicio pesado ou esportes 5 a 6 dias por semana)\n"); 
	   printf("Digite 5 - para EXTREMAMENTE ATIVO (exercicio pesado ou esportes todo dia ou ate 2 vezes ao dia )\n"); 
	   scanf ("%i", &atividades );
	   
       switch (atividades){
	      case 1:
	       fator  = 1.2; 
	       break; 
	       
	      case 2: 
	       fator = 1.375; 
	       break; 
	      
	      case 3: 
	       fator = 1.55; 
	       break; 
	      
	      case 4: 
	       fator = 1.725; 
	       break; 
	       
	     case 5:
	       fator = 1.9;
	       break; 
		 
		 default: 
		   printf ("Valor nao reconhecido, tente novamente");
		   break; 
       
        }
        
		int taxagringa = 88 + (13.397*pesobr)+(4.8*alturabr)-(5.677*idade);
        int taxametgringa = (taxagringa*fator); 
	    
	    int taxamulhergringa = 655 + (9.6*pesobr)+(1.8*alturabr)-(4.7*idade);
	    int taxafinalmulhergringa = (taxamulhergringa*fator);
		
		switch (genero){
		  case 1: 
		    printf ("taxa metabolica = %i kcal por dia ", taxametgringa); 
		    break;
		  case 2: 
		    printf ("taxa metabolica = %i kcal por dia ", taxafinalmulhergringa);
		    break; 
		
		
		}
       
       
       
       
       break; 


    default: 
       printf ("O numero de escolha nao foi reconhecido, tente novamente");
       break; 


}


	
	
	
	
	
	
	return 0;
}
