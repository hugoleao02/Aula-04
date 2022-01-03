#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {


	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
	float produto, desconto = 0.10, total;

	printf("Informe o preço do produto: ");
	scanf("%f",&produto);

	total = produto - (produto * desconto);

	printf("Preço do produto com desconto fica %.2f\n",total);

	system("pause");
	       return 0;
   }

