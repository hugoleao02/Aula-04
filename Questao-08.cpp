#include <iostream>
using namespace std;
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

	float n1,n2,n3,media;


	cout <<"Digite primeira nota "<<endl;
	cin >> n1;
	cout <<"Digite segunda nota "<<endl;
	cin >> n2;
	cout <<"Digite terceira nota "<<endl;
	cin >> n3;

	media = (n1 + n2 + n3)/3;

	cout << "A média das nota são: " << media;

}

