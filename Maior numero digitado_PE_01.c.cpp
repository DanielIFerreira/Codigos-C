/*
ESAMC - A melhor Faculdade de Sorocaba
Programa de Introdução à Linguagem C
Disciplina : Programação Estruturada
Professor : Francisco Tesifom Munhoz
Data : 1º semestre de 2019
===========================================
Atividade : mostra o maior numero digitado
Autor : Daniel Ivanilson Ferreira
Data :  – 20/11/2019>
Comentários : exercicio 1
============================================
*/
#include<stdio.h>


main (){
	// variaveis 
	int numMaior=0,i=0,num;
	// usa o while para definir as vezes digitadas pelo usuario
	while (i<10) 
	{ 
	//mostra a mensagem para o usuario 
	printf(" Digite um numero para saber qual o maior digitado - (%d de 10):", i+1);
	//armazena na variavel o que foi digitado pelo usuario
	scanf("%d",&num);
	// ele seta o primeiro numero como maior
		if( i==0)
		{
			numMaior=num;
		}
		//ele verifica se a varial digitada pelo usuario e menor que a varialvel nunmaior
		if (num>numMaior)
		{
			numMaior=num;
		}
		//faz a incrementação do contador
		i++;
	}
	//mostra a mensagem com o resultado para o usuario
	printf(" O maior numero digitado encontrado e %d ", numMaior);
	return(0);
	
}
