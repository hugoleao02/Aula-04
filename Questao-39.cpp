#include <stdio.h> // Biblioteca de entrada e sa�da de dados
#include <stdlib.h> // Biblioteca de convers�o das strings
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {

 	 setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	 float salario=1200, c= 200, c2=120, juros=0.02,res, total;
	 
	 c = c + (c * juros);
	 c2 = c2 +(c2 * juros);
	 total = c + c2;
	 
	 res= salario - total;
	 
	 printf("Tem a pagar %.f\nrestou %.f do sal�rio\n",total,res);

	 system("pause");
	 return 0;
}

