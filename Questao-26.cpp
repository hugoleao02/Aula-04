#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres

//Fa�a um algoritmo que receba tr�s n�meros, calcule e mostre a multiplica��o desses
//n�meros.

int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	int n1, n2, n3, soma;

	printf("Digite primeiro n�mero: ");
	scanf("%d",&n1);

	printf("Digite segundo n�mero: ");
	scanf("%d",&n2);

	printf("Digite terceiro n�mero: ");
	scanf("%d",&n3);

	n1 = n1 * n1;
	n2 = n2 * n2;
	n3 = n3 * n3;
	
	printf("\nAs multiplica��o s�o:\n N1 = %d\n N2 = %d\n N3 = %d",n1,n2,n3);
	
	return 0;
}

