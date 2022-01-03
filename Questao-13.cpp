#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
	int num, units, hundred, dozens;

	cout <<"Digite um número (assuma até três dígitos)"<<endl;
	cin >> num;
	
	hundred = num/100;
	dozens = (num %100)/10;
	units = (num %100) % 10;

	cout << "Centenas "<< hundred << endl << "Dezenas "<< dozens << endl << "Units "<< hundred << endl;
	
	return 0;
}
