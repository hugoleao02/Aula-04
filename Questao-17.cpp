#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	float celsius,fah;
	printf("Informe a temperatura em graus em celsius\n");
	scanf("%f",&celsius);

	fah = celsius * 1.8 + 32;

	printf("\nA temperatura em graus em Fahrenheit é: %.2f\n",fah);



	return 0;
}

