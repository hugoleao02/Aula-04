#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres

//Faça um algoritmo que calcule e mostre a área de um losango. Sabe-se que: A =
//(diagonal_maior * diagonal_menor)/2;


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	float base_maior, base_menor, area;

	printf("Informe a maior base: ");
	scanf("%f",&base_maior);

	printf("Informe a menor base: ");
	scanf("%f",&base_menor);

	//calculando a area
	
	area = (base_maior * base_menor)/2;

	printf("A área do losango é : %.2f\n",area);

	system("pause");
	return 0;
}
