#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

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

