#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	float peso, emagrecer=0.20, engordar=0.15;

	printf("Informe seu peso ");
	scanf("%f",&peso);
	
	//emagracer
	emagrecer = emagrecer * peso;
	emagrecer = peso - emagrecer;
	
	//engoradar
	engordar = engordar * peso;
	engordar = peso + engordar;
	
	printf("Se engordar 20 porcento o Seu peso � = %.2f \nSe emagrecer 15 porcento  o Seu peso � = %.2f\n",engordar,emagrecer);
	system("pause");
	return 0;
}

