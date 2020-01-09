/*
ESAMC - A melhor Faculdade de Sorocaba
Programa de Introdução à Linguagem C
Disciplina : Programação Estruturada
Professor : Francisco Tesifom Munhoz
Data : 1º semestre de 2019
===========================================
Atividade : mostra o menor numero digitado
Autor : Daniel Ivanilson Ferreira
Data :  – 20/11/2019>
Comentários : exercicio 2
============================================
*/
#include<stdio.h>



main (void){
	/*	declaração das varias de nunMenor (menor numero ate o momento)  
	, num (numero digitado pelo usuario)  e i (contador para o while)
	*/
	int numMenor=0,i = 0,num; 
	
	
	while (i<10) // enquanto contador for menor que 10.
	{
		//printf (para o usuario digitar a mensagem)
		printf(" Digite um valor para saber qual o menor digitado - (%d de 10 ):",i+1); 
		// scanf (pra ler o valor digitado pelo usuario)
		scanf("%d",&num);
		// if (se for a primeira execução, recebe o primerio valor como menor)
		if ( i == 0 )
		
		{
		 	numMenor=num;	
		}
		// if (verifica se o numero recebido é menor que o atual menor)
		if (num<numMenor)
		{
			numMenor=num;
		}
		// i (faz a incrementação do contador)
		i++;
		
	}
	// printf (mostra o resultado para o usuario)
	printf(" O menor numero digitado eh: %d",numMenor);
	return(0);
	system("pause");
}
