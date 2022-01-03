#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres

int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
	float n1, n2 ,div;

	printf("Divisão de números");
	printf("\nDigite um número que quer ser dividido: ");
	scanf("%f",&n1);
	printf("Digite um número por quantos será dividido: ");
	scanf("%f",&n2);

	div = n1 / n2;

	printf("Resultado da divisão é: %.2f\n",div);
	system("pause");
	
	    return 0;
   }

