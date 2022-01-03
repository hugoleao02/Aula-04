#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres
#include <math.h>

# define PI 3.14159265358979323846

int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	float raio, altura, volume;

	printf("Informe o raio da base da caixa d´água: ");
	scanf("%f",&raio);

	printf("\nInforme a altura da caixa d´água: ");
	scanf("%f",&altura);

	volume = PI * pow(raio,2) * altura;
	
	printf("\nVolume da caixa d´água é: %f",volume);


	return 0;
}

