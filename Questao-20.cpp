#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	int blusa, la, total;
	printf("Quantidade de blusa produzidas\n");
	scanf("%d",&blusa);

	printf("Quantidade de novelos de lã  gasta por blusa\n");
	scanf("%d",&la);

	total = la * blusa;

	printf("Quantidade novelos de lã ela gasta por blusa: %d",total);

	return 0;
}

