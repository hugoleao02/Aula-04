#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	int count, num, resu;

	printf("Ecreva um n�mero: ");
	scanf("%d",&num);
	printf("\n\n\tA tabuada");
	printf("\n---------------------------");
	for(count= 1; count <=10 ; count++ ) {
		resu = num * count;
		printf("\n|\t %d X %d  ",num,resu);
	}


	system("pause");
	return 0;
}

