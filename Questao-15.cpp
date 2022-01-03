#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
	float conta = 101.53, carlos = 33.00 , andre = 35.53, felipe;

	felipe = conta - (carlos + andre) ;


	printf("Felipe pagar %.2f",felipe);


	return 0;
}

