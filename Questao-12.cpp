#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o
	float salary, increased_salary, net_salary, taxes = 0.08, increase = 0.15;

	cout <<"Digite seu sal�rio"<<endl;
	cin >> salary;

	increased_salary = salary + (salary * increase);

	net_salary =  increased_salary - (increased_salary * taxes);

	cout << "Seu sal�rio com aumento  " << increased_salary << endl << "Seu sal�rio livre " << net_salary << endl;

	return 0;
}
