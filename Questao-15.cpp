#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o
	float conta = 101.53, carlos = 33.00 , andre = 35.53, felipe;

	felipe = conta - (carlos + andre) ;


	printf("Felipe pagar %.2f",felipe);


	return 0;
}

