#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	int blusa, la, total;
	printf("Quantidade de blusa produzidas\n");
	scanf("%d",&blusa);

	printf("Quantidade de novelos de l�  gasta por blusa\n");
	scanf("%d",&la);

	total = la * blusa;

	printf("Quantidade novelos de l� ela gasta por blusa: %d",total);

	return 0;
}

