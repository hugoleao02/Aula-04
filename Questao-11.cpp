#include <iostream>//biblioteca de arquivos de cabe�alho
using namespace std;//Arquivos de cabe�alho adicionam funcionalidade
#include <locale.h> // Biblioteca de acentua��o de caracteres
#include <cmath>//Bliblioteca matem�tica

int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o
float days, month, years;

cout << "Qantos dias trabalhados sem acidentes" <<endl;
cin >> days;


month = days /30;
years = days /12; 

cout << "Anos sem acidente " << years << endl << "Meses sem acidentes " << month << endl << "Dias sem acidentes " << days << endl;
}
