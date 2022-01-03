#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	float hora = 10.00, hora_extra =15.00, horas_traba, impostos=0.10, sa_bruto, sa_liquido ;


	printf("Informe a horas trabalhada\n");
	scanf("%f",&horas_traba);
	
	sa_bruto= hora * horas_traba;
	sa_liquido = sa_bruto - (sa_bruto * impostos);
	
	printf("Salário bruto é %.2f\nSalário líquido é %.2f\n",sa_bruto,sa_liquido);
  return 0;
}

