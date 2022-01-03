#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {

	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
	
	int ano_nasc,ano_atual,id_anos,id_meses,id_dias,id_semanas;

	printf("Qual o ano do seu nascimento \n");

	scanf("%d",&ano_nasc);

	printf("Qual o ano atual \n");

	scanf("%d",&ano_atual);

	id_anos=ano_atual-ano_nasc;

	id_meses=id_anos*12;

	id_dias=id_anos*365;
	
	id_semanas=id_meses*4;

//Resposta da questao a

	printf("\nA idade da pessoa em anos e %.d \n",id_anos);

//Resposta da questao b

	printf("A idade da pessoa em meses e %d \n",id_meses);

//Resposta da questao c

	printf("A idade da pessoa em dias e %d \n",id_dias);

//Resposta da questao d

	printf("A idade da pessoa em semanas e %d \n",id_semanas);




	return(0);
}

