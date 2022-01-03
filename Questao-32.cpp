#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	float peso,gramas;

	printf("Informe seu peso em Kg para transformar em gramas: ");
	scanf("%f",&peso);

	gramas = peso * 1000;

	printf("Seu peso em gramas é: %.2fg\n",gramas);
	system("pause");
	return 0;
}

