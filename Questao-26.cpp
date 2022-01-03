#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres

//Faça um algoritmo que receba três números, calcule e mostre a multiplicação desses
//números.

int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	int n1, n2, n3, soma;

	printf("Digite primeiro número: ");
	scanf("%d",&n1);

	printf("Digite segundo número: ");
	scanf("%d",&n2);

	printf("Digite terceiro número: ");
	scanf("%d",&n3);

	n1 = n1 * n1;
	n2 = n2 * n2;
	n3 = n3 * n3;
	
	printf("\nAs multiplicação são:\n N1 = %d\n N2 = %d\n N3 = %d",n1,n2,n3);
	
	return 0;
}

