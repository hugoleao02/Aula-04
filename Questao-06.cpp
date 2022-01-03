#include <iostream>
using namespace std;
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
	float kilo = 12.00, food, food_pay;
	
	cout << "Qual é o peso da refeição (em Kg)?"<< endl;
	cin >> food;
	
	food_pay = food * kilo;
	
	cout << "O valor a pagar em R$ " << food_pay;
}
