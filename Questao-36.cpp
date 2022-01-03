#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres

//Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um
//funcionário, calcule e mostre a quantidade de salários mínimos que ganha esse funcionário.


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	float salario_min, salario_func,total;

	
	printf("Informe o salário minímo: ");
	scanf("%d",&salario_min);

	printf("Informe o salário do funcionário: ");
	scanf("%d",&salario_func);

	//calculando a area

	total =  salario_func / salario_min;
	
	printf("Sao %.1f salário minímo \n",total);

	system("pause");
	return 0;
}
