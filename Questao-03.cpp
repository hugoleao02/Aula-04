#include <iostream>
using namespace std;
#include <locale.h> // Biblioteca de acentuação de caracteres



int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
	float bread = 0.12 , broa = 1.50 , savings, fees = 0.10, total;
	int qty_bread,qty_broa;


	cout << "Informe quantidade de pão vendida:"<<endl;
	cin >> qty_bread;
	cout << "Informe quantidade de broa vendida:"<<endl;

	cin >> qty_broa;

	total = (qty_bread * bread) + (qty_broa * broa);
	savings= total * fees;

	cout << "Você arrecadou " << total << endl;
	cout << "Você deve guarda " << savings << " do que arrecadou";

}
