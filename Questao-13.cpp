#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o
	int num, units, hundred, dozens;

	cout <<"Digite um n�mero (assuma at� tr�s d�gitos)"<<endl;
	cin >> num;
	
	hundred = num/100;
	dozens = (num %100)/10;
	units = (num %100) % 10;

	cout << "Centenas "<< hundred << endl << "Dezenas "<< dozens << endl << "Units "<< hundred << endl;
	
	return 0;
}
