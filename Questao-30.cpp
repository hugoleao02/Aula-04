#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres

//30. Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um
//algoritmo que receba o sal�rio fixo de um funcion�rio e o valor de suas vendas, calcule e mostre
//a comiss�o e o sal�rio final do funcion�rio.
int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o
	float comissao = 0.04, sal_fixo, sal_total, vendas;


	printf("Digite sal�rio: ");
	scanf("%f",&sal_fixo);
	
	printf("Digite as vendas: ");
	scanf("%f",&vendas);
	
	comissao = sal_fixo * (vendas * comissao);
	
	sal_total = comissao + sal_fixo;
	
	printf("\nSal�rio total %.2f\nComiss�o %.2f\n",sal_total,comissao);


	system("pause");
	return 0;
}

