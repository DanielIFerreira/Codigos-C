/*
ESAMC - A melhor Faculdade de Sorocaba
Programa de Introdução à Linguagem C
Disciplina : Programação Estruturada
Professor : Francisco Tesifom Munhoz
Data : 1º semestre de 2019
===========================================
Atividade : Saldo,extrato e deposito banco
Autor : Daniel Ivanilson Ferreira
Data :  – 20/11/2019>
Comentários : exercicio 10
============================================
*/
#include<stdio.h>

main()
{
	//incluindo as variaveis
	int i=0, opcao;
	float saldo=0,deposito,saque, teste;
	//while para o usuario escolher quando para
	while(opcao != 4)
	{
		// mostra a mensagem para o usuario 
		printf("\nEscolha a opcao desejada:\n (1) Consulta saldo: \n (2) Saque:\n (3) Deposito:\n (4) Sair:\n");
		// Armazena na variavel opcao o que o usuario digitou
		scanf("%d",&opcao);
		//se a escolha for 1 mostra o saldo
		if(opcao==1)
		{
			// Mostra o saldo para o cliente
			printf("Seu saldo eh: R$%.2f",saldo);
		}
		//se a escolha for 3 faz deposito e adiciona o deposito ao saldo
		else if(opcao==3)
		{
			// pede para o usuario digitar o valor do deposito
			printf("Digite o valor a ser depositado:R$ ");
			// Armazena na variavel deposito o que o usuario digitou
			scanf("%f", &deposito);
			// Armazena na variavel  o que saldo e adiciona na varialvel deposito usuario digitou
			saldo=saldo+deposito;
		}
		//se a escolha for a 2 fala qual o saque e se o saque for maior que o saldo ele devolve com uma mensagem de saldo insuficiente.
		else if (opcao==2)
		{
			// mostra a mensagem para o usuario
			printf("Digite o valor a ser sacado:R$");
			scanf("%f",&saque);
			// usa if para dizer que saque e menor ou igual a saldo
			if(saque<=saldo)
			{
				//tira o valor de saque da varialvel saldo
				saldo=saldo-saque;
			}
			else
			{
				//mostra a mensagem para o ususario
				printf("Voce nao tem saldo suficiente para o saque");
			}
		}
		// se a escolha for opcao 4 ele sai do programa.		
		else if (opcao!= 4 )
		{
			//mostra a mensagem caso o ususario digite algum numero fora do especificado
			printf("Opcao digitada invalida.");
		}
		else
		{
			//mostra a mensagem para o ususario
			printf("Obrigado!");
		}
	}
	
}
