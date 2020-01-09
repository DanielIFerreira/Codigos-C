/*
ESAMC - A melhor Faculdade de Sorocaba
Programa de Introdução à Linguagem C
Disciplina : Programação Estruturada
Professor : Francisco Tesifom Munhoz
Data : 1º semestre de 2019
===========================================
Atividade : Tabuada
Autor : Daniel Ivanilson Ferreira
Data :  – 20/11/2019>
Comentários : exercicio 8
============================================
*/
#include<stdio.h>

main(void)
{
	//variaveis utilizadas
	int n,mult,i=0;
	//mostra a mensagem para o usuario
	printf("Digite um numero para saber a tabuada do mesmo: ");
	//guarda a variavel que o usuario digitou
	scanf("%d",&n);
	//usa o for para fazer a incrementação e o maximo de vezes que o usuario pode digitar
	for(i=1;i<=10;i++)
	{
		//faz a operação matematica e depois armazena na variavel mult
		mult=i*n; 
		//mostra o resultado para o usuario
		printf("%d x %d = %d\n",n ,i,  mult);
	}
	
}
