#include <iostream>
using namespace std;
#include <locale.h> // Biblioteca de acentuação de caracteres






int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
	int horse,horseshoe;

	cout << "Digite quantidade da cavalos:"<<endl;
	cin >> horse;

	horseshoe = horse * 4;
	cout << "A quantidade de ferraduras necesário é " << horseshoe ;

	return 0;

}
