/*
ESAMC - A melhor Faculdade de Sorocaba
Programa de Introdução à Linguagem C
Disciplina : Programação Estruturada
Professor : Francisco Tesifom Munhoz
Data : 1º semestre de 2019
===========================================
Atividade : Numero de ocorrencias 
Autor : Daniel Ivanilson Ferreira
Data :  – 20/11/2019>
Comentários : exercicio 3
============================================
*/
#include<stdio.h>
main (void)
{	
	// declaraão das variaveis	
	int num1=0,num2=0,num3=0,num4=0,num5,num6=0,i=0,num;
	// enquando o ususario não inserir 10 valores validos 
	while(i<10)
	{	
		// para o usuario digitar os valores entre 0 e 6
		printf("Digite um munmero de 0 a 6: " );
		scanf("%d",&num);
		// para compara se o numero digitado é maior ou igual e menor ou igual a 6 
		if(num >= 0 && num <= 6)
		{
			// se for o numero 1 ele faz a incrementação 
			if(num==1)
			
			{
				num1++;
				i++;
			}
			// se for o numero 2 ele faz a incrementação 
			if(num==2)
			
			{
				num2++;
				i++	;
			}
			// se for o numero 3 ele faz a incrementação 
			if(num==3)
			{
				num3++;
				i++;
			}
			// se for o numero 4 ele faz a incrementação 
			if(num==4)
			{
				num4++;
				i++;
			}
			// se for o numero 5 ele faz a incrementação 
			if(num==5)
			{
				num5++;
				i++;
			}
			// se for o numero 6 ele faz a incrementação 
			if(num==6)
			{	
				num6++;
				i++;
			}
		// caso o usuario digite algum valor fora de 0 e 6 retorna uma mensagem pediando para ele digitar entre esses dois valores.		
		}else
		{
			printf("Por vafor digite um valor entre 0 e 6: \n ");
			
		}
	}
	// mostra para o usuario quantas x os numeros digitados entrou dentro dos numeros pedidos
	printf(" O valor 1 foi digitado %d x \n", num1);
	printf(" O valor 2 foi digitado %d x \n", num2);
	printf(" O valor 3 foi digitado %d x \n", num3);
	printf(" O valor 4 foi digitado %d x \n", num4);
	printf(" O valor 5 foi digitado %d x \n", num5);
	printf(" O valor 6 foi digitado %d x \n", num6);
	return(0);
}

