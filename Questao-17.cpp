#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	float celsius,fah;
	printf("Informe a temperatura em graus em celsius\n");
	scanf("%f",&celsius);

	fah = celsius * 1.8 + 32;

	printf("\nA temperatura em graus em Fahrenheit �: %.2f\n",fah);



	return 0;
}

