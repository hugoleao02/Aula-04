#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres

//30. Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um
//algoritmo que receba o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre
//a comissão e o salário final do funcionário.
int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
	float comissao = 0.04, sal_fixo, sal_total, vendas;


	printf("Digite salário: ");
	scanf("%f",&sal_fixo);
	
	printf("Digite as vendas: ");
	scanf("%f",&vendas);
	
	comissao = sal_fixo * (vendas * comissao);
	
	sal_total = comissao + sal_fixo;
	
	printf("\nSalário total %.2f\nComissão %.2f\n",sal_total,comissao);


	system("pause");
	return 0;
}

