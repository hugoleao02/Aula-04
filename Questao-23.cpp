#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	float au, ap, su, sp, sr;

	printf("Informe tamanho da sombra do predio..: ");
	scanf("%f",&sp);

	printf("Informe tamanho da sombra do usu�rio.: ");
	scanf("%f",&su);

	printf("Informe altura do usu�rio............: ");
	scanf("%f",&au);

	sr =sp/su;
	ap =sr*au;

	printf("Altura do pr�dio: %.2f metros",ap);


	return 0;
}

