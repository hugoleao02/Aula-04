#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	int area,raio;

	printf("Digite o raio da pizza\n");
	scanf("%d",&raio);

	area = 3.14 * (raio * raio);

	printf("A área da pizza é %d \n",area);



	return 0;
}

