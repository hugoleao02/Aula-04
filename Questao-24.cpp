#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	float lrefresco, lagua,lsuco;
//Um tonel de refresco � feito com 8 partes de �gua mineral e 2 partes de suco de maracuj�.
//Fa�a um algoritmo para calcular quantos litros de �gua e de suco s�o necess�rios para se fazer
//X litros de refresco (informados pelo usu�rio).

	printf("Digite a quantidade de refresco em L: ");
	scanf("%f",&lrefresco);

	lagua =lrefresco*0.8;

	lsuco = lrefresco*0.2;

	printf("\nS�o necess�rios %f \nlitros de �gua e %f litros de suco para fazer o refresco\n",lagua,lsuco);
	return 0;
}

