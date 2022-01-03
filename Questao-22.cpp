#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
	float real = 1.00 , qtd_real, dez = 0.10, qtd_dez, cinco = 0.5, qtd_cinco, vinteC = 0.25, qtd_vinteC, cinquenta = 0.50 ,qtd_cinquenta, total;

	printf("Quantidade de moedas de 5(cinco) centavos\n");
	scanf("%f",&qtd_cinco);

	printf("Quantidade de moedas de 10(dez) centavos\n");
	scanf("%f",&qtd_dez);

	printf("Quantidade de moedas de 25(vinte-cinco) centavos\n");
	scanf("%f",&qtd_vinteC);

	printf("Quantidade de moedas de 1(um) real\n");
	scanf("%f",&qtd_real);

	cinco = cinco * qtd_cinco;
	dez  = dez * qtd_dez;
	vinteC = vinteC * qtd_vinteC;
	cinquenta = cinquenta * qtd_cinquenta;
	real = real * qtd_real;

	total = cinco + dez + vinteC + cinquenta + real;

	printf("\nTotal acumulado é %.2f reais",total);

	return 0;
}

