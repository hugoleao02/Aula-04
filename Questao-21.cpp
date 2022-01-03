#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
	int la, ga,  pe ;
	float garrafa = 0.600, lata = 0.350, total , pet = 2.000;

	printf("Informe quatidade comprada de coca lata 350ml\n");
	scanf("%d",&la);

	printf("Informe quatidade comprada de coca garrfa de 600ml\n");
	scanf("%d",&ga);

	printf("Informe quatidade comprada de coca garrafa de 2 litros\n");
	scanf("%d",&pe);

	lata = lata * la;
	garrafa = garrafa * ga;
	pet = pet * pe;
	total =lata + garrafa + pet;

	if(total >= 1.000) {
		printf("Você comprou %.3f litros\n",total);
	} else {
		printf("Você comprou %.3f ml\n",total);
	}

	return 0;
}

