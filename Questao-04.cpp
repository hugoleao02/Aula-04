#include <iostream>//biblioteca de arquivos de cabe�alho
#include <string>//Incluir a biblioteca de strings
using namespace std;//Arquivos de cabe�alho adicionam funcionalidade
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o
	string name ;
	int age, years = 360, days;


	cout << "Qual �  seu nome?"<<endl;
	cin >> name;

	cout << "Qual sua idade?"<< endl;
	cin >> age ;

	days = age * years;

	cout << name << " voc� j� viveu " << days << " dias\n";


}
