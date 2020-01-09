/*
ESAMC - A melhor Faculdade de Sorocaba
Programa de Introdução à Linguagem C
Disciplina : Programação Estruturada
Professor : Francisco Tesifom Munhoz
Data : 1º semestre de 2019
===========================================
Atividade : Sinulação de eleição com numeros definidos de eleitores
Autor : Daniel Ivanilson Ferreira
Data :  – 20/11/2019>
Comentários : exercicio 4
============================================
*/
#include<stdio.h>


main()
{
	// inseri as variaveis
	int candidatoA=0,candidatoB=0,candidatoC=0,i=0,num;
	// Usa o while para definir as vezes que o usuario vai digitar
	while(i<20)
	{
		//mostra a mensagem para o usuario e armazena na variavel a escolha do candidato
		printf( "Escolha qual sera o seu candidato digite:\n 1 para o candidato A: \n 2 para o candidato B: \n 3 para o candidato C: \n  " );
		scanf("%d",&num);
		//Uso de if para a escolha do candidato e faz a incrementação de voto para o candidato e a incrementação do numero digitado
		if(num==1) 
		{
		 	candidatoA++;
			i++;	
		}
		//Uso de if para a escolha do candidato e faz a incrementação de voto para o candidato e a incrementação do numero digitado
		else if(num==2)
		{
			candidatoB++;
			i++;
		}
		//Uso de if para a escolha do candidato e faz a incrementação de voto para o candidato e a incrementação do numero digitado
		else if (num==3)
		{
			candidatoC++;
			i++;
		}
		//caso o usuario coloque outro numero ele retorno com opcao invalida.
		else 
		{
			printf("Por favor digite uma opcão valida.\n: ");
		}
		
		
	}
	//mostra os votos finais de cada candidato
	printf("O candidato A teve %d de votos \n",candidatoA);
	printf("O candidato B teve %d de votos \n",candidatoB);
	printf("O candidato C teve %d de votos \n",candidatoC);
	return(0);
}
