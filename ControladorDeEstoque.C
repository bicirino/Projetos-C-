//// Controlador de estoque - EM CONSTRUÇÃO
#include <stdio.h>
#include <string.h>
#include <locale.h>

struct produto {
    int quantidade;
    float valor;
    char nome[20];
    char descricao[200];
};

typedef struct produto produto;

int main() {
    setlocale(LC_ALL,"Portuguese");

    int i, n, a, todos_produtos;

    int res, num; 
	
	printf("Bem-Vindo ao controlador de estoque! Quantos produtos deseja cadastrar no controlador? ");
    	scanf("%i", &n);
    	getchar();
    
	produto produtos[n];

    
	for (i = 0; i < n; i++) {
        printf("\n\t->Digite o nome do produto (%i): ", i + 1);
        fgets(produtos[i].nome, 21, stdin);
        fflush(stdin); 
        
		
        printf("\n\t->Digite o valor do produto (%i): R$", i + 1);
        scanf("%f", &produtos[i].valor);
        
		
	printf("\n\t->Digite a quantidade em estoque do produto(%i): ", i + 1);
        scanf("%i", &produtos[i].quantidade);
        getchar();
        

        printf("\n\t->Digite uma descrição para o produto(%i): ", i + 1);
        fgets(produtos[i].descricao, 200, stdin);
       
    }

    
    printf("\n--- Produtos Cadastrados ---\n");
    for (i = 0; i < n; i++) {
        printf("Produto %d:\n", i + 1);
        printf("  Nome: %s\n", produtos[i].nome);
        printf("  Valor: %.2f\n", produtos[i].valor);
        printf("  Quantidade: %d\n", produtos[i].quantidade);
        printf("  Descricao: %s\n", produtos[i].descricao);
    }
	
	
	printf("\n______________________________________________________________________________"); 
	
	printf ("\nDigite 1 - para ALTERAR dados");
	printf ("\nDigite 2 - para ADICIONAR produto"); 
	printf ("\nDigite 3 - para MANTER estoque"); 
	printf ("\n->"); 
	scanf("%i", &res); 
	
	switch (res){ 
		case 1: 
			printf("Digite o número do produto que deseja alterar (1 a %i):", n); 
			scanf ("%i", &i ); 
			getchar(); 
			
			
			printf("\n\t->Digite o nome do produto (%i): ", i + 1);
        		fgets(produtos[i].nome, 21, stdin);
        		fflush(stdin); 
			
			printf("\n\t->Digite o valor do produto (%i): R$", i + 1);
        		scanf("%f", &produtos[i].valor);
			
			 printf("\n\t->Digite a quantidade em estoque do produto(%i): ", i + 1);
        		scanf("%i", &produtos[i].quantidade);
        		getchar();
        

        		printf("\n\t->Digite uma descrição para o produto(%i): ", i + 1);
        		fgets(produtos[i].descricao, 200, stdin);
		
			break; 
		
		
		case 2: 
			printf ("Quantos produtos deseja acresentar?: "); 
			scanf("%i", &a); 
			getchar(); 
			
			todos_produtos = n+a; 
			
			for (i=n; i<todos_produtos; i++){
			
				printf("\n\t->Digite o nome do produto (%i): ", i+1 );
        			fgets(produtos[i].nome, 21, stdin);
        			fflush(stdin); 
        
				printf("\n\t->Digite o valor do produto (%i): R$", i+1 );
	        		scanf("%f", &produtos[i].valor);
	        
	
	        		printf("\n\t->Digite a quantidade em estoque do produto(%i): ", i+1 );
	        		scanf("%i", &produtos[i].quantidade);
	        		getchar();
	        
	
	        		printf("\n\t->Digite uma descrição para o produto(%i): ", i+1 );
	        		fgets(produtos[i].descricao, 200, stdin);
	    	
				printf("\n--- Produtos Cadastrados ---\n");
    				for (i = 0; i < todos_produtos; i++) {
        				printf("Produto %d:\n", i + 1);
        				printf("  Nome: %s\n", produtos[i].nome);
        				printf("  Valor: %.2f\n", produtos[i].valor);
        				printf("  Quantidade: %d\n", produtos[i].quantidade);
        				printf("  Descricao: %s\n", produtos[i].descricao);
    				}
			
			}
		break;
		
		
		case 3:
			printf("\n--- Produtos Cadastrados ---\n");
    		for (i = 0; i < n; i++) {
        		printf("Produto %d:\n", i + 1);
        		printf("  Nome: %s\n", produtos[i].nome);
        		printf("  Valor: %.2f\n", produtos[i].valor);
        		printf("  Quantidade: %d\n", produtos[i].quantidade);
        		printf("  Descricao: %s\n", produtos[i].descricao);
    		}
		break; 
		
		
		default: 
			printf("Comando não reconhecido. Tente novamente"); 
		break;
	}
	
	
	
	
    return 0;
}
