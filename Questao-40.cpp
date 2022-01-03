#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	float cateto1, cateto2, resultado;

	printf("Digite o primeiro Cateto\n");
	scanf("%f",&cateto1);

	printf("Digite o segundo Cateto\n");
	scanf("%f",&cateto2);

	resultado = (cateto1*2)+(cateto2*2);

	printf("A hipotenusa é %.f\n",resultado);
	system("pause");
	return 0;
}

