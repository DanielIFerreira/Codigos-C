/*
ESAMC - A melhor Faculdade de Sorocaba
Programa de Introdução à Linguagem C
Disciplina : Programação Estruturada
Professor : Francisco Tesifom Munhoz
Data : 1º semestre de 2019
===========================================
Atividade : Eleição com numero de votos indefinido
Autor : Daniel Ivanilson Ferreira
Data :  – 20/11/2019>
Comentários : exercicio 5
============================================
*/
#include<stdio.h>


main(void)
{
	// inseri as variaveis
	int  candidatoA=0, candidatoB=0, candidatoC=0, contador=0,voto;
	// Usa o while para definir as vezes que o usuario vai digitar e sair apenas quando for diferente de 4
	while(voto != 4)
	{
		//mostra a mensagem para o usuario e armazena na variavel a escolha do candidato
		printf("Escolha qual sera o seu candidato digite:\n 1 para o candidato A: \n 2 para o candidato B: \n 3 para o candidato C: \n 4 para sair: ");
		
		scanf("%d",&voto);
		//Uso de if para a escolha do candidato e faz a incrementação de voto para o candidato e a incrementação do numero digitado
		if (voto==1)
		{
			candidatoA++;
			contador++;
		}
		//Uso de if para a escolha do candidato e faz a incrementação de voto para o candidato e a incrementação do numero digitado
		else if (voto==2)
		{
			candidatoB++;
			contador++;
		}
		//Uso de if para a escolha do candidato e faz a incrementação de voto para o candidato e a incrementação do numero digitado
		else if(voto==3)
		{
			candidatoC++;
			contador++;			
		}
		//caso o usuario coloque outro numero ele retorno com opcao invalida
		else
		{
		printf("Por favor digite uma opcao valida.\n ");
		}
		
	}
		//mostra os votos finais de cada candidato
		printf("O candidato 1 teve (%d) de votos: \n",candidatoA);
		printf("O candidato 2 teve (%d) de votos: \n",candidatoB);
		printf("O candidato 3 teve (%d) de votos: \n",candidatoC);
		return(0);
}
