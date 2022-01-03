#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
	int qtd_queijo, queijo, qtd_presunto, presunto, hamburguer, sanduiche, qtd_sanduiches, total;

	printf("Informe quantidade de sanduiches\n");
	scanf("%d",&qtd_sanduiches);

	presunto = qtd_sanduiches * 0.50;
	queijo = qtd_sanduiches * 0.50;
	hamburguer = qtd_sanduiches * 100;

	printf("\nQuantidade  que precisam:\npresunto %d gramas\nqueijo %d gramas\nhamburguer %d gramas\n",presunto,queijo,hamburguer);
	return 0;
}

