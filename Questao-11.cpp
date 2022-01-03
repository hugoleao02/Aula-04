#include <iostream>//biblioteca de arquivos de cabeçalho
using namespace std;//Arquivos de cabeçalho adicionam funcionalidade
#include <locale.h> // Biblioteca de acentuação de caracteres
#include <cmath>//Bliblioteca matemática

int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
float days, month, years;

cout << "Qantos dias trabalhados sem acidentes" <<endl;
cin >> days;


month = days /30;
years = days /12; 

cout << "Anos sem acidente " << years << endl << "Meses sem acidentes " << month << endl << "Dias sem acidentes " << days << endl;
}
