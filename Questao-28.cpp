#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o


	float n1, n2, mp;
	printf("digite o 1� numero\n");
	scanf("%f",&n1);

	printf("digite o 2� numero\n");
	scanf("%f",&n2);
	
	mp=(n1*2)+(n2*3)/3+2;
	
	printf("o resultado � %.2f\n",mp);


	system("pause");
	       return 0;
       }

