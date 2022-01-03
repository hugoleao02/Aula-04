#include <iostream>//biblioteca de arquivos de cabeçalho
#include <string>//Incluir a biblioteca de strings
using namespace std;//Arquivos de cabeçalho adicionam funcionalidade
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
	string name ;
	int age, years = 360, days;


	cout << "Qual é  seu nome?"<<endl;
	cin >> name;

	cout << "Qual sua idade?"<< endl;
	cin >> age ;

	days = age * years;

	cout << name << " você já viveu " << days << " dias\n";


}
