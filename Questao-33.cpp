#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	float base_maior, base_menor, altura , area;

	printf("Informe a maior base: ");
	scanf("%f",&base_maior);

	printf("Informe a menor base: ");
	scanf("%f",&base_menor);

	printf("Informe a altura da base: ");
	scanf("%f",&altura);
	
	//calculando a area
	
	area = ((base_maior + base_menor) * altura)/2;

	printf("A �rea  do trap�zio � : %.2f\n",area);

	system("pause");
	return 0;
}

