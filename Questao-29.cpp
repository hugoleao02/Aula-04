#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {


	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o
	float produto, desconto = 0.10, total;

	printf("Informe o pre�o do produto: ");
	scanf("%f",&produto);

	total = produto - (produto * desconto);

	printf("Pre�o do produto com desconto fica %.2f\n",total);

	system("pause");
	       return 0;
   }

