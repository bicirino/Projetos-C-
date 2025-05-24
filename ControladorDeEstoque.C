// Controlador de estoque - EM CONSTRUÇÃO 
#include <stdio.h> 
#include <locale.h> 
#include <string.h> 


struct produto{ 
  int quantidade; 
  float valor; 
  char nome [20]; 
  char descricao [200]; 
}; 


typedef struct produto produto; 

int main(){ 
  setlocale(LC_ALL,"Portuguese"); 

  int i, n; 

  

  printf ("Bem-Vindo ao controlador de estoque! Quantos produtos deseja cadastrar no controlador?"); 
  scanf("%i", &n);

  produto produtos [n]; 
  
  for ( i=0; i<n; i++){
    printf("\n\t->Digite o nome do produto (%i):", i+1); 
    fgets(produtoS[i].nome, 20, stdin); 
    fflush(stdin); 

    printf("\n\t->Digite o valor do produto (%i):", i+1); 
    scanf("%f", &produtos[i].valor); 

    printf("\n\t->Digite a quantidade em estoque do produto(%i):", i+1); 
    scanf("%i", &produtos[i].quantidade); 

    printf("\n\t->Digite uma descrição para o produto(%i):", i+1); 
    fgets(produtos[i].descricao, 200, stdin); 
    fflush(stdin); 

    

  }; 








}; 
