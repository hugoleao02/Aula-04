#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres
#include <math.h>

# define PI 3.14159265358979323846

int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	float raio, altura, volume;

	printf("Informe o raio da base da caixa d��gua: ");
	scanf("%f",&raio);

	printf("\nInforme a altura da caixa d��gua: ");
	scanf("%f",&altura);

	volume = PI * pow(raio,2) * altura;
	
	printf("\nVolume da caixa d��gua �: %f",volume);


	return 0;
}

