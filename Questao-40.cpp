#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	float cateto1, cateto2, resultado;

	printf("Digite o primeiro Cateto\n");
	scanf("%f",&cateto1);

	printf("Digite o segundo Cateto\n");
	scanf("%f",&cateto2);

	resultado = (cateto1*2)+(cateto2*2);

	printf("A hipotenusa � %.f\n",resultado);
	system("pause");
	return 0;
}

