#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres

//Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um
//funcion�rio, calcule e mostre a quantidade de sal�rios m�nimos que ganha esse funcion�rio.


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	float salario_min, salario_func,total;

	
	printf("Informe o sal�rio min�mo: ");
	scanf("%d",&salario_min);

	printf("Informe o sal�rio do funcion�rio: ");
	scanf("%d",&salario_func);

	//calculando a area

	total =  salario_func / salario_min;
	
	printf("Sao %.1f sal�rio min�mo \n",total);

	system("pause");
	return 0;
}
