#include <iostream>
using namespace std;
#include <locale.h> // Biblioteca de acentua��o de caracteres






int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o
	int horse,horseshoe;

	cout << "Digite quantidade da cavalos:"<<endl;
	cin >> horse;

	horseshoe = horse * 4;
	cout << "A quantidade de ferraduras neces�rio � " << horseshoe ;

	return 0;

}
