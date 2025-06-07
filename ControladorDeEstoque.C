//// Controlador de estoque - EM CONSTRUÇÃO
#include <stdio.h>
#include <string.h>                                                                                                        // Declaração de bibliotecas 
#include <locale.h>

struct produto {                                                                                                          // Defino o novo tipo de dado criado para os produtos 
    int quantidade;
    float valor;
    char nome[20];
    char descricao[200];
};                                                                                                                                

typedef struct produto produto;                                                                                         // Renomeio struct produto para apenas "produto" 

int main() {
    setlocale(LC_ALL,"Portuguese");                                                                                    // Utilizo a função para ter acesso a acentuação no programa 

    int i, n, a, todos_produtos;                                                                                       // Declaração de variáveis 

    int res, num; 
	
	printf("Bem-Vindo ao controlador de estoque! Quantos produtos deseja cadastrar no controlador? ");
    	scanf("%i", &n);
    	getchar();                                                                                                     // Utilizei o getchar() para corrigir Bugs de "Skip" 
    
	produto produtos[n];                                                                                               // Defino o vetor produtos de tamanho N com o tipo primitivo criado: produto 

    
	for (i = 0; i < n; i++) {
        printf("\n\t->Digite o nome do produto (%i): ", i + 1);                                                       // Utilizo FOR para receber os dados dos produtos 1 a N  
        fgets(produtos[i].nome, 21, stdin);
        fflush(stdin);                                                                                                // Utilizo FFLUSH para limpar Buffer do teclado 
        
		
        printf("\n\t->Digite o valor do produto (%i): R$", i + 1);
        scanf("%f", &produtos[i].valor);
        
		
	printf("\n\t->Digite a quantidade em estoque do produto(%i): ", i + 1);
        scanf("%i", &produtos[i].quantidade);
        getchar();                                                                                                   // Novamente utilização do getchar() para correção de Bugs  
        

        printf("\n\t->Digite uma descrição para o produto(%i): ", i + 1);
        fgets(produtos[i].descricao, 200, stdin);                                                                   
       
    }

    
    printf("\n--- Produtos Cadastrados ---\n");                                                                     // Uso do for para exibir produtos cadastrados 
    for (i = 0; i < n; i++) {      
        printf("Produto %d:\n", i + 1);
        printf("  Nome: %s\n", produtos[i].nome);
        printf("  Valor: %.2f\n", produtos[i].valor);
        printf("  Quantidade: %d\n", produtos[i].quantidade);
        printf("  Descricao: %s\n", produtos[i].descricao);
    }
	
	
	printf("\n______________________________________________________________________________");                 // Oferecimento de um cardápio de novas opções para o usuário 
	
	printf ("\nDigite 1 - para ALTERAR dados");                                                 
	printf ("\nDigite 2 - para ADICIONAR produto"); 
	printf ("\nDigite 3 - para MANTER estoque"); 
	printf ("\n->"); 
	scanf("%i", &res);                                                                                 
	
	switch (res){                                                                                                // Abro um Switch para analisar as tomadas de decisão pós resposta do usuário 
		case 1: 
			printf("Digite o número do produto que deseja alterar (1 a %i):", n);                               // Pergunto ao usuário qual produto será alterado - de 1 (valor mínimo) até o produto N(último produto) 
			scanf ("%i", &i ); 
			getchar(); 
			
			
			printf("\n\t->Digite o novo nome do produto (%i): ", i );
        		fgets(produtos[i].nome, 21, stdin);
        		fflush(stdin);                                                                                 // Ao receber o novo nome do produto, limpo todo BUFFER do teclado 
			
			printf("\n\t->Digite o novo valor do produto (%i): R$", i );
        		scanf("%f", &produtos[i].valor);
			
			 printf("\n\t->Digite a quantidade em estoque do produto(%i): ", i );
        		scanf("%i", &produtos[i].quantidade);
        		getchar();
        

        	printf("\n\t->Digite uma descrição para o produto(%i): ", i );
        	fgets(produtos[i].descricao, 200, stdin);
		
			printf("\n--- Produtos Cadastrados ---\n");                                                    // Ao alterar o produto, exibo a nova tabela alterada pelo usuário 
			printf("  Nome: %s\n", produtos[i].nome);
        	printf("  Valor: %.2f\n", produtos[i].valor);
        	printf("  Quantidade: %d\n", produtos[i].quantidade);
        	printf("  Descricao: %s\n", produtos[i].descricao);
			
			
			
			
			break; 
		
		
		case 2: 
			printf ("Quantos produtos deseja acresentar?: "); 
			scanf("%i", &a); 
			getchar(); 
			
			todos_produtos = n+a;                                                                      // Crio a nova variável "todos_produtos" para resolver um Bug de reconhecimento 
			
			for (i=n; i<todos_produtos; i++){                                                          // Utilizo outro FOR para receber novos dados 
			
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
	        		fflush(stdin); 
	    	
				printf("\n--- Produtos Cadastrados ---\n");                                         // Exibo a tabela atualizada pelo usuário 
    				for (i = 0; i < todos_produtos; i++) {
        				printf("Produto %d:\n", i + 1);
        				printf("  Nome: %s\n", produtos[i].nome);
        				printf("  Valor: %.2f\n", produtos[i].valor);
        				printf("  Quantidade: %d\n", produtos[i].quantidade);
        				printf("  Descricao: %s\n", produtos[i].descricao);
    				}
			
			}
		break;
		
		
		case 3:                                                                                     // Início do caso 3 - mais simples - uma vez que o usuário deseja manter a tabela como está 
			printf("\n--- Produtos Cadastrados ---\n");                                             // Apenas exibo a tabela novamente 
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
	
	
	// Gerar arquivo - estoque 
	FILE *arquivo = fopen("estoque.csv", "w"); 
	
	if (arquivo == NULL){ 
		printf("Erro ao criar arquivo"); 
		return 1; 
	}
	
	
	fprintf (arquivo, "Produto; Valor(R$); Quantidade;  Descrição\n"); 
	
	for (i=0; i<n; i++){ 
		produtos[i].nome [strcspn(produtos[i].nome, "\n")] =0; 
		produtos[i].descricao[strcspn(produtos[i].descricao, "\n")] = 0; 
		
		fprintf(arquivo, "\"%s\";\"%.2f\";\"%d\";\"%s\"\n",
        	produtos[i].nome,
        	produtos[i].valor,
        	produtos[i].quantidade,
        	produtos[i].descricao 
        ); 
	
	}
	
	fclose (arquivo); 
	printf("\nArquivo 'estoque.csv' gerado com sucesso!\n");
	
    return 0;
}
