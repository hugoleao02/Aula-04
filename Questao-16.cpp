#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o
	int qtd_queijo, queijo, qtd_presunto, presunto, hamburguer, sanduiche, qtd_sanduiches, total;

	printf("Informe quantidade de sanduiches\n");
	scanf("%d",&qtd_sanduiches);

	presunto = qtd_sanduiches * 0.50;
	queijo = qtd_sanduiches * 0.50;
	hamburguer = qtd_sanduiches * 100;

	printf("\nQuantidade  que precisam:\npresunto %d gramas\nqueijo %d gramas\nhamburguer %d gramas\n",presunto,queijo,hamburguer);
	return 0;
}

