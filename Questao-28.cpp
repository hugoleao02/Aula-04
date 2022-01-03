#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão


	float n1, n2, mp;
	printf("digite o 1º numero\n");
	scanf("%f",&n1);

	printf("digite o 2º numero\n");
	scanf("%f",&n2);
	
	mp=(n1*2)+(n2*3)/3+2;
	
	printf("o resultado é %.2f\n",mp);


	system("pause");
	       return 0;
       }

