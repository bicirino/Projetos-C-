

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
		
		printf ("\n\t->Me conta como você se sente (fique à vontade, não precisa poupar palavras): ");
		fgets (desabafo_user, 3000, stdin);
		fflush(stdin); 
	
		if (strstr(desabafo_user,"Triste") != NULL || strstr (desabafo_user, "triste") != NULL || strstr(desabafo_user,"Tristeza") != NULL ||strstr(desabafo_user, "tristeza") != NULL){
			printf("\n\t->Poxa, me dói saber que você está triste :( ");
			printf ("\n\t->Aqui vai um conselho: Tente achar a verdadeira alegria nas coisas mais simples da vida, como: Família, natureza, comidas, amigos, religião, e em muitas outras coisas. \n\t->Às vezes, lembrar de tudo que temos e de todos que estão conosco nos ajuda a nos manter alegre! Pare para pensar... O fato de você acordar mais um dia com saúde depois de uma boa noite de sono já é um GRANDE MOTIVO DE ALEGRIA!");
			printf ("\n\t->Enfim,espero que você melhore! Saiba que estou sempre aqui pra te ajudar :)");
		
		}else if (strstr(desabafo_user,"Alegre") != NULL|| strstr(desabafo_user,"alegre") != NULL || strstr(desabafo_user,"Alegria") != NULL || strstr(desabafo_user,"alegria") != NULL){
			printf ("\n\t->Fico muito feliz em saber que você está alegre!\n\t->Continue cultivando esse sentimento todos dias, e além de guardar essa alegria só pra você... seja tão alegre a ponto de transbordar essa alegria pros outros ");
			printf ("\n\t->Mas fique atento! algumas pessoas não vão gostar de te ver sorrir, mas não se importe com isso! aproveite e conviva com pessoas que se alegram com você!");
			printf("\n\t-> Enfim, espero que continua sendo desse jeito! O mundo precisa de cada vez mais pessoas felizes :)");
		
		}else if (strstr(desabafo_user, "Cansado") != NULL || strstr (desabafo_user,"cansado") != NULL || strstr(desabafo_user,"Cansaço") != NULL || strstr(desabafo_user,"cansaço") != NULL){ 
			printf ("\n\t->Se sentir cansado realmente é algo muito comum, principalmente se você for uma pessoa adulta que possui mais responsabilidades");
			printf("\n\t->Meu conselho: tente fazer coisas que te descansem em meio a sua rotina provavelmente caótica, como: olhar a natureza, fechar um pouco os olhos, tomar um banho quente e muitas outras coisas que te trazem paz ");
			printf ("\n\t->Outro conselho é: evitar de fazer coisas que tomem ainda mais o seu tempo, como: se preocupar demais, trabalhar além do necessário e muitas outras");
			printf("\n\t->De modo geral: tente achar a paz em meio à bagunça que você renovará suas forças");
		
		}else if (strstr(desabafo_user,"Ansioso") != NULL || strstr (desabafo_user,"ansioso") != NULL|| strstr(desabafo_user,"Ansiedade") != NULL || strstr (desabafo_user,"ansiedade") != NULL ){
			printf("\n\t->A ansiedade infelizmente tem sido um dos problemas psicológicos mais comuns atualmente, muito por causa de uma preocupação excessiva com o futuro");
			printf("\n\t->Meu conselho: tente lembrar que a vida muitas vezes não vai acontecer da maneira que você quer, mas mesmo assim ela não deixa de ser boa e apaixonante!");
			printf("\n\t->Às vezes o que você não quer que ocorra acontece e você vê que aquilo nem era ruim!"); 
			printf("\n\t->Não se preocupe com coisas que não estão ao seu alcance! Pois isso é como tentar serrar serragem!");
			printf("\n\t->De modo geral: entenda que a vida não pode ser 100% planejada, mas não ache isso uma coisa ruim, porque às vezes isso que faz ela ser maravilhosa! "); 
		
		}else if (strstr(desabafo_user,"Sozinho") != NULL || strstr(desabafo_user,"sozinho") != NULL || strstr(desabafo_user,"Solidão") != NULL || strstr(desabafo_user,"solidão") != NULL ){
			printf ("\n\t->Em meio a uma rotina corrida e dias cheios, é normal se sentir sozinho! Mas a boa notícia é: essa solidão na maioria das vezes é FALSA! ");
			printf("\n\t->Por exemplo: tente lembrar das pessoas que te amam, mesmo que elas não estejam presentes fisicamente com você ");
			printf("\n\t->Enfim: veja além da sua rotina e enxergue além do seu ambiente físico, as pessoas que realmente se preocupam com você. Como: um amigo, parente ou até seu Dog! ");
		
		}else if (strstr(desabafo_user,"Estressado") != NULL || strstr(desabafo_user, "estressado") != NULL || strstr(desabafo_user,"Estresse") != NULL || strstr (desabafo_user,"estresse") != NULL ){
			printf("\n\t->Esse é um dos sentimentos mais comuns da vida adulta! Às vezes você sente que tudo te estressa mais do que deveria, né? ");
			printf("\n\t->E ainda tem o lance da pressão em tentar, mesmo nessas situações parecer bem. Quando você está nessa situação você deve aceitar que não está tudo bem! ");
			printf("\n\t->Meu conselho: Não dá pra segurar o mundo e ainda sorrir o tempo todo. Desacelere! Se acalme! Vá no seu rítmo! ");
		
		}else if (strstr(desabafo_user,"Depressão") != NULL || strstr(desabafo_user,"depressão") != NULL || strstr(desabafo_user,"Depressivo") != NULL || strstr(desabafo_user,"depressivo") !=NULL ){
			printf("\n\t->Depressão é um assunto muito sério e que deve ser tratado com muito cuidado! \n\t->Primeiramente, mesmo que eu tenha embasamento científico para meus conselhos, é importante que você procure um profissional para fazer um acompanhamento diário ou semanal!");
			printf ("\n\t->Acredito que para sabermos lidar com a depressão, precisamos saber lidar com a tristeza "); 
			printf ("\n\t->Aqui vai um conselho: Tente achar a verdadeira alegria nas coisas mais simples da vida, como: Família, natureza, comidas, amigos, religião, e em muitas outras coisas. \n\t->Às vezes, lembrar de tudo que temos e de todos que estão conosco nos ajuda a nos manter alegre! Pare para pensar... O fato de você acordar mais um dia com saúde depois de uma boa noite de sono já é um GRANDE MOTIVO DE ALEGRIA!");
			printf ("\n\t->Enfim,espero que você melhore! Saiba que estou sempre aqui pra te ajudar :)");
		
		}else if (strstr(desabafo_user,"Frustrado") != NULL || strstr(desabafo_user,"frustado")!= NULL || strstr(desabafo_user,"Frustração") != NULL || strstr(desabafo_user, "frustação") != NULL ){
			printf("\n\t->Às vezes é comum se sentir frustrado por não atingir algum objetivo ou meta que lhe foi imposta à você - seja por você mesmo, seja por outra pessoa "); 
			printf("\n\t->Meu conselho: tente canalizar essa decepção e essa tristeza, para na próxima dar seu máximo e conseguir!"); 
			printf("\n\t->Mas lembre-se, você não deve se cobrar além do saudável! Faça uma cobrança que te motive, além disso: não se cobre mais! respeite-se ");
		
		}else if (strstr(desabafo_user,"Ódio") != NULL || strstr(desabafo_user,"ódio") != NULL || strstr(desabafo_user,"Odeio") != NULL || strstr(desabafo_user,"odeio") != NULL ){ 
			printf ("\n\t->O ódio é um sentimento muito ruim! E que não devemos sentir nem mesmo pelos nossos inimigos! "); 
			printf ("\n\t->Ao odiar uma coisa ou uma pessoa, abrimos mão da nossa paz para depositar raiva sobre uma circunstância ");
			printf("\n\t->Você deve lembrar que eu falei: 'nem mesmo pelos nossos inimigos'. Mas para falar a verdade, ninguém tem inimigos! você não tem! "); 
		
		}else if(strstr(desabafo_user,"Grato")!= NULL || strstr(desabafo_user,"grato") != NULL || strstr(desabafo_user,"Gratidão") != NULL || strstr(desabafo_user,"gratidão") != NULL ){
			printf("\n\t->A gratidão é um sentimento silencioso, mas poderoso! Ela transforma o que temos em tudo que precisamos."); 
			printf("\n\t->Ao sermos gratos, focamos na abundância, e não na falta. Isso muda nossa forma de ver o mundo");
			printf("\n\t->Você deve lembrar que eu falei: ‘abundância’. Porque muitas vezes ela está naquilo que já está à sua volta, só esperando ser notada!");
			
		}else if(strstr(desabafo_user,"Medo")!= NULL || strstr(desabafo_user,"medo") != NULL || strstr(desabafo_user,"Amedrontado") != NULL || strstr(desabafo_user,"amedrontado") != NULL ){
			printf("\n\t->->O medo é natural! Ele avisa sobre perigos, mas também pode nos paralisar sem razão"); 
			printf("\n\t->Se deixarmos o medo decidir por nós, corremos o risco de não viver tudo o que poderíamos"); 
			printf("\n\t->Você deve lembrar que eu falei: ‘viver’. Porque é isso que o medo às vezes tenta impedir — e não podemos deixar");
		
		}
		
	
		
		
		
	}else{ 
		printf ("\t->Ops! Parece que você ainda não está pronto :(  \n\t->Volte quando se sentir à vontade!"); 
	}
	
	
	return 0; 
}
