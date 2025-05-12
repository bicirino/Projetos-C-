// Projeto ChatBot psicólogo EM ANDAMENTO 

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){ 
	setlocale(LC_ALL,"Portuguese"); 

	
	char desabafo_user [1000]; 
	
	char resposta_user [7]; 
	
	char apelido [20]; 
	
	
	printf ("\nSeja Bem-vindo ao ChatBot psicólogo! Nossa conversa funcionará assim: Você me conta como você está se sentindo e eu te dou conselhos com embasamento científico para melhorar seu problema.\n");
	
	printf ("\n\n\t->Vamos começar ? Se você está pronto digite 'PRONTO': "); 
	fgets (resposta_user, 7, stdin );
	fflush (stdin);
	
	if (strcmp(resposta_user,"PRONTO") == 0 ){
		printf ("\t->Que bom!Parece que você já está pronto!Vamos começar :) ");
	
		printf ("\n\t->Já te considero meu amigo! Para nossa amizade ficar ainda mais forte, digite um apelido seu : ");
		fgets (apelido, 20, stdin); 
		fflush (stdin); 
	
		printf ("\n\t->Vamos começar nossa conversa, %s ", apelido);
		printf ("\n\t->Me conta como você se sente: ");
		fgets (desabafo_user, 1000, stdin);
		fflush(stdin); 
	
	
	
	
	}else{ 
		printf ("\t->Ops! Parece que você ainda não está pronto :(  \n\t->Volte quando se sentir à vontade!"); 
	}
	
	

  return 0; 
}
