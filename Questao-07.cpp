#include <iostream>
using namespace std;
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
	
 int day,month,years = 365,days_passed;
 

 cout <<"Digite o dia do mês"<<endl;
 cin >> day;
 cout << "Digite o mês "<<endl;
 cin >> month;
 
 days_passed = ((month * 30) -30) + day;
 
 cout << "Se passaram " << days_passed << " des do ínicio do ano!";
 
}

