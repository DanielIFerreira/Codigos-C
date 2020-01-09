/*
ESAMC - A melhor Faculdade de Sorocaba
Programa de Introdução à Linguagem C
Disciplina : Programação Estruturada
Professor : Francisco Tesifom Munhoz
Data : 1º semestre de 2019
===========================================
Atividade : Media Geral
Autor : Daniel Ivanilson Ferreira
Data :  20/11/2019
Comentários : exercicio 7
============================================
*/
#include<stdio.h>

main(void)
{
	//incluindo as variaveis
	int contador=1;
	float nota,mediaGeral,total;
	// uso do while que defina as 15 repetiçoes
	while (contador<=15)
	{
		//mostra a mensagem para o usuario e amarzena o numero digitado
		printf("Digita as nota para saber a media final dos alunos: ");
		scanf("%f",&nota);
		//pega o total e adiciona a nota e faz a incrementação
		total=total+nota;
		contador++;
	}
	//faz a divisão para ter a media
	mediaGeral=total/15;
	//mostra a media final
	printf("A media final dos alunos foi: %.2f",mediaGeral);
	
}
