#include <iostream>
using namespace std;
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o
	
 int day,month,years = 365,days_passed;
 

 cout <<"Digite o dia do m�s"<<endl;
 cin >> day;
 cout << "Digite o m�s "<<endl;
 cin >> month;
 
 days_passed = ((month * 30) -30) + day;
 
 cout << "Se passaram " << days_passed << " des do �nicio do ano!";
 
}

