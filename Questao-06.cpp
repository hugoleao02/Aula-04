#include <iostream>
using namespace std;
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o
	float kilo = 12.00, food, food_pay;
	
	cout << "Qual � o peso da refei��o (em Kg)?"<< endl;
	cin >> food;
	
	food_pay = food * kilo;
	
	cout << "O valor a pagar em R$ " << food_pay;
}
