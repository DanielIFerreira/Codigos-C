/*
ESAMC - A melhor Faculdade de Sorocaba
Programa de Introdução à Linguagem C
Disciplina : Programação Estruturada
Professor : Francisco Tesifom Munhoz
Data : 1º semestre de 2019
===========================================
Atividade :  Mostra o valor maior e menor digitado
Autor : Daniel Ivanilson Ferreira
Data :  – 20/11/2019>
Comentários : exercicio 6
============================================
*/
#include<stdio.h>
 main()
 {
 	// inseri as variaveis
 	int valorMaior=0,valorMenor=0,contador=0,digiteOvalor;
 	// enquando o ususario não inserir 10 valores validos 
 	while(contador<10)
 	{
 		//Mostra a mensagem para o usuario e armazena o que o usuario digitou
 		printf("Digite os valores entre (%d) ",contador+1);
 		scanf("%d",&digiteOvalor);
 		//usa o if para dizer que o contador tem que ser igual a 1
 		if (contador==1)
		 {
		 	//usa o valorMenor para reseber o valor digitado na variavel digiteOvalor
		 	valorMenor=digiteOvalor;
		 }
		 //Usa o if para dizer que a variavel digiteOvalor é menor que valorMenor
		if (digiteOvalor<valorMenor)
		{
			// para dizer que a variavel digiteOvalor é menor que valorMenor
			valorMenor<digiteOvalor;
		}
		//Usa o else if para dizer que a variavel digiteOvalor é maior que valorMaior
		else if (digiteOvalor>valorMaior)
		{
			//usa o valorMaior para reseber o o valor digitado na variavel digiteOvalor
			valorMaior=digiteOvalor;	
		}
		//Incrementador
		contador++;
	 }
	 //Mostra o resultado final para o usuario
	 printf("O maior valor encontrado foi: %d \n",valorMaior);
	 printf("O menor valor encontrado foi: %d",valorMenor);
 }
