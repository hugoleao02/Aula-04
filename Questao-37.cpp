#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	int count, num, resu;

	printf("Ecreva um número: ");
	scanf("%d",&num);
	printf("\n\n\tA tabuada");
	printf("\n---------------------------");
	for(count= 1; count <=10 ; count++ ) {
		resu = num * count;
		printf("\n|\t %d X %d  ",num,resu);
	}


	system("pause");
	return 0;
}

