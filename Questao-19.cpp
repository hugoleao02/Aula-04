#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	int frango;
	float id = 4.00, alim = 3.50, total;

	printf("Inforrme quantidade de frango tem na granja\n");
	scanf("%d",&frango);

	id = id * frango;
	alim = alim * frango;
	total = alim + id;
	
	printf("O valor total a gasta : %.2f\n",total);


	return 0;
}

