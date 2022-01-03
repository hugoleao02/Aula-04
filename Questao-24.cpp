#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	float lrefresco, lagua,lsuco;
//Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de maracujá.
//Faça um algoritmo para calcular quantos litros de água e de suco são necessários para se fazer
//X litros de refresco (informados pelo usuário).

	printf("Digite a quantidade de refresco em L: ");
	scanf("%f",&lrefresco);

	lagua =lrefresco*0.8;

	lsuco = lrefresco*0.2;

	printf("\nSão necessários %f \nlitros de água e %f litros de suco para fazer o refresco\n",lagua,lsuco);
	return 0;
}

