
// Projeto ChatBot psicólogo EM ANDAMENTO 

#include <stdio.h>
#include <locale.h>
#include <string.h>


int main (){ 
	setlocale(LC_ALL,"Portuguese"); 

	char desabafo_user [3000]; 

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
		fgets (desabafo_user, 3000, stdin);
		fflush(stdin); 
	
		if (strstr(desabafo_user,"Triste") != NULL || strstr (desabafo_user, "triste") != NULL){
			printf("\n\t->Poxa, me dói saber que você está triste :( ");
			printf ("\n\t->Aqui vai um conselho: Tente achar a verdadeira alegria nas coisas mais simples da vida, como: Família, natureza, comidas, amigos, religião, e em muitas outras coisas. \n\t->Às vezes, lembrar de tudo que temos e de todos que estão conosco nos ajuda a nos manter alegre! Pare para pensar... O fato de você acordar mais um dia com saúde depois de uma boa noite de sono já é um GRANDE MOTIVO DE ALEGRIA!");
			printf ("\n\t->Enfim,espero que você melhore! Saiba que estou sempre aqui pra te ajudar :)");
		
		}else if (strstr(desabafo_user,"Alegre") != NULL|| strstr(desabafo_user,"alegre") != NULL ){
			printf ("\n\t->Fico muito feliz em saber que você está alegre!\n\t->Continue cultivando esse sentimento todos dias, e além de guardar essa alegria só pra você... seja tão alegre a ponto de transbordar essa alegria pros outros ");
			printf ("\n\t->Mas fique atento! algumas pessoas não vão gostar de te ver sorrir, mas não se importe com isso! aproveite e conviva com pessoas que se alegram com você!");
			printf("\n\t-> Enfim, espero que continua sendo desse jeito! O mundo precisa de cada vez mais pessoas felizes :)");
		
		}else if (strstr(desabafo_user, "Cansado") != NULL || strstr (desabafo_user,"cansado") != NULL ){ 
			printf ("\n\t->Se sentir cansado realmente é algo muito comum, principalmente se você for uma pessoa adulta que possui mais responsabilidades");
			printf("\n\t->Meu conselho: tente fazer coisas que te descansem em meio a sua rotina provavelmente caótica, como: olhar a natureza, fechar um pouco os olhos, tomar um banho quente e muitas outras coisas que te trazem paz ");
			printf ("\n\t->Outro conselho é: evitar de fazer coisas que tomem ainda mais o seu tempo, como: se preocupar demais, trabalhar além do necessário e muitas outras");
			printf("\n\t->De modo geral: tente achar a paz em meio à bagunça que você renovará suas forças");
		
		}else if (strstr(desabafo_user,"Ansioso") != NULL || strstr (desabafo_user,"ansioso") != NULL){
		
	
		
		
		
	}else{ 
		printf ("\t->Ops! Parece que você ainda não está pronto :(  \n\t->Volte quando se sentir à vontade!"); 
	}
	
	
	return 0; 
}
