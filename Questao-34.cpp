#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres



int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	float lado1, lado2, area;

	printf("Informe primeiro lado do quadrado: ");
	scanf("%f",&lado1);

	printf("Informe segundo lado do quadrado: ");
	scanf("%f",&lado2);
	
	area = lado1 * lado2;
	
	printf("A �rea do quadrado � %.2f\n",area);

	system("pause");
	return 0;
}

