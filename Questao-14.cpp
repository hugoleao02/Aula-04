#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	int area,raio;

	printf("Digite o raio da pizza\n");
	scanf("%d",&raio);

	area = 3.14 * (raio * raio);

	printf("A �rea da pizza � %d \n",area);



	return 0;
}

