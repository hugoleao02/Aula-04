#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
	float salary, increased_salary, net_salary, taxes = 0.08, increase = 0.15;

	cout <<"Digite seu salário"<<endl;
	cin >> salary;

	increased_salary = salary + (salary * increase);

	net_salary =  increased_salary - (increased_salary * taxes);

	cout << "Seu salário com aumento  " << increased_salary << endl << "Seu salário livre " << net_salary << endl;

	return 0;
}
