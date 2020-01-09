/*
ESAMC - A melhor Faculdade de Sorocaba
Programa de Introdução à Linguagem C
Disciplina : Programação Estruturada
Professor : Francisco Tesifom Munhoz
Data : 1º semestre de 2019
===========================================
Atividade : Media arritimetica
Autor : Daniel Ivanilson Ferreira
Data :  – 20/11/2019>
Comentários : exercicio 9
============================================
*/
#include<stdio.h>
main(void)
{
	//variaveis usada
	int nota,resultado=0,i=1,media=0;
	//faz algo dentro da estrutura
	do
	{
		//mostra a mensagem para o usuario
		printf("Digite a nota %d: \n", i);
		//armazena o que digitado para o ususario
	    scanf("%d",&nota);	
	    
	    //usa o if para dizer se a nota for menor que 0 ou maior que 10 
	    if(nota<0 || nota>10 )
		{
		//Mostra a mensagem para o usuario
		printf("Nota digita invalida. \n");
		}
		else
		{
		//soma o resultado a nota digitada
			resultado=resultado+nota;
			//faz a incrementação de mais 1
			i++;	
		}
		//usa o while para definir quantas vezes o usuario pode digitar
	}while (i<=4);
	//pega o resultado e divide por 4 e amarzena na variavel media
	media=resultado/4;
		//se a media for maior ou igual a 7
	if (media>=7)
	{
		//mostra a mensagem para o usuario
		printf("Aluno aprovado");
	}
	//usa o else if para definir que se a media for maior ou igual a 5 e media for menor que 7
	else if (media>=5 && media <7)
	{
		//mostra a mensagem para o usuario
		printf("Aluno de exame final");
	}
	//usa else para mostrar a mensagem final
	else 
	{
		printf("Aluno reprovado");
 	}
}

