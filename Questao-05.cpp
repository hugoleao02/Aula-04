#include <iostream>
using namespace std;
#include <locale.h> // Biblioteca de acentua��o de caracteres

int main(){
	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o
	
	float preco_gasolina,valor_pagamento, litros;

// Entrada de dados
cout <<"Informe o preco da gasolina:"<<endl;
cin >> preco_gasolina;


cout << "\Informe o valor pago:"<<endl;
cin >> valor_pagamento;


litros = valor_pagamento / preco_gasolina;
cout <<"Voc� colocou " << litros << " litros em seu carro." ;
	
}
