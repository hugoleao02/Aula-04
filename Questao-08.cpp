#include <iostream>
using namespace std;
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

	float n1,n2,n3,media;


	cout <<"Digite primeira nota "<<endl;
	cin >> n1;
	cout <<"Digite segunda nota "<<endl;
	cin >> n2;
	cout <<"Digite terceira nota "<<endl;
	cin >> n3;

	media = (n1 + n2 + n3)/3;

	cout << "A m�dia das nota s�o: " << media;

}

