#include <iostream>
using namespace std;
#include <locale.h> // Biblioteca de acentua��o de caracteres



int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o
	float bread = 0.12 , broa = 1.50 , savings, fees = 0.10, total;
	int qty_bread,qty_broa;


	cout << "Informe quantidade de p�o vendida:"<<endl;
	cin >> qty_bread;
	cout << "Informe quantidade de broa vendida:"<<endl;

	cin >> qty_broa;

	total = (qty_bread * bread) + (qty_broa * broa);
	savings= total * fees;

	cout << "Voc� arrecadou " << total << endl;
	cout << "Voc� deve guarda " << savings << " do que arrecadou";

}
