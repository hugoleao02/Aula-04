#include <iostream>//biblioteca de arquivos de cabeçalho
using namespace std;//Arquivos de cabeçalho adicionam funcionalidade
#include <locale.h> // Biblioteca de acentuação de caracteres
#include <cmath>//Bliblioteca matemática

int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

float x1,y1, x2,y2, total;
 
cout << "Infome cordenada A" << endl;
cin >> x1;
cin >> y1;
cout << "Infome cordenada B" << endl ;
cin >> x2 ;
cin >> y2 ;

total = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2) );

cout << "Ponto é " << total << endl;
}
