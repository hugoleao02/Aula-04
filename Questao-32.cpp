#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	float peso,gramas;

	printf("Informe seu peso em Kg para transformar em gramas: ");
	scanf("%f",&peso);

	gramas = peso * 1000;

	printf("Seu peso em gramas �: %.2fg\n",gramas);
	system("pause");
	return 0;
}

