#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres

int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o
	float n1, n2 ,div;

	printf("Divis�o de n�meros");
	printf("\nDigite um n�mero que quer ser dividido: ");
	scanf("%f",&n1);
	printf("Digite um n�mero por quantos ser� dividido: ");
	scanf("%f",&n2);

	div = n1 / n2;

	printf("Resultado da divis�o �: %.2f\n",div);
	system("pause");
	
	    return 0;
   }

