#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres



int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	float lado1, lado2, area;

	printf("Informe primeiro lado do quadrado: ");
	scanf("%f",&lado1);

	printf("Informe segundo lado do quadrado: ");
	scanf("%f",&lado2);
	
	area = lado1 * lado2;
	
	printf("A área do quadrado é %.2f\n",area);

	system("pause");
	return 0;
}

