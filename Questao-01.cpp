#include <iostream>
using namespace std;
#include <locale.h> // Biblioteca de acentua��o de caracteres






int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	int length,width,area;


	cout << "Digite comprimento da �rea:"<<endl;
	cin >> length;
	cout << "Digite largura da �rea:"<<endl;
	cin >>width;

	area = length * width;

cout << "\n �rea do terreno � %dm� \n" << area;
}
