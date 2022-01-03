#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	float peso, emagrecer=0.20, engordar=0.15;

	printf("Informe seu peso ");
	scanf("%f",&peso);
	
	//emagracer
	emagrecer = emagrecer * peso;
	emagrecer = peso - emagrecer;
	
	//engoradar
	engordar = engordar * peso;
	engordar = peso + engordar;
	
	printf("Se engordar 20 porcento o Seu peso é = %.2f \nSe emagrecer 15 porcento  o Seu peso é = %.2f\n",engordar,emagrecer);
	system("pause");
	return 0;
}

