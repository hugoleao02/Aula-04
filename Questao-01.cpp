#include <iostream>
using namespace std;
#include <locale.h> // Biblioteca de acentuação de caracteres






int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	int length,width,area;


	cout << "Digite comprimento da área:"<<endl;
	cin >> length;
	cout << "Digite largura da área:"<<endl;
	cin >>width;

	area = length * width;

cout << "\n Área do terreno é %dm² \n" << area;
}
