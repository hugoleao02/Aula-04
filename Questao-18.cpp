#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	float hora = 10.00, hora_extra =15.00, horas_traba, impostos=0.10, sa_bruto, sa_liquido ;


	printf("Informe a horas trabalhada\n");
	scanf("%f",&horas_traba);
	
	sa_bruto= hora * horas_traba;
	sa_liquido = sa_bruto - (sa_bruto * impostos);
	
	printf("Sal�rio bruto � %.2f\nSal�rio l�quido � %.2f\n",sa_bruto,sa_liquido);
  return 0;
}

