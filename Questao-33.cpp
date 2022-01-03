#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	float base_maior, base_menor, altura , area;

	printf("Informe a maior base: ");
	scanf("%f",&base_maior);

	printf("Informe a menor base: ");
	scanf("%f",&base_menor);

	printf("Informe a altura da base: ");
	scanf("%f",&altura);
	
	//calculando a area
	
	area = ((base_maior + base_menor) * altura)/2;

	printf("A área  do trapézio é : %.2f\n",area);

	system("pause");
	return 0;
}

