#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres

//Fa�a um algoritmo que calcule e mostre a �rea de um losango. Sabe-se que: A =
//(diagonal_maior * diagonal_menor)/2;


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	float base_maior, base_menor, area;

	printf("Informe a maior base: ");
	scanf("%f",&base_maior);

	printf("Informe a menor base: ");
	scanf("%f",&base_menor);

	//calculando a area
	
	area = (base_maior * base_menor)/2;

	printf("A �rea do losango � : %.2f\n",area);

	system("pause");
	return 0;
}
