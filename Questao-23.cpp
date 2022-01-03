#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	float au, ap, su, sp, sr;

	printf("Informe tamanho da sombra do predio..: ");
	scanf("%f",&sp);

	printf("Informe tamanho da sombra do usuário.: ");
	scanf("%f",&su);

	printf("Informe altura do usuário............: ");
	scanf("%f",&au);

	sr =sp/su;
	ap =sr*au;

	printf("Altura do prédio: %.2f metros",ap);


	return 0;
}

