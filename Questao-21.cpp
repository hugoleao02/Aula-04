#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o
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
		printf("Voc� comprou %.3f litros\n",total);
	} else {
		printf("Voc� comprou %.3f ml\n",total);
	}

	return 0;
}

