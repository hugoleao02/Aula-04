#include <iostream>//biblioteca de arquivos de cabe�alho
using namespace std;//Arquivos de cabe�alho adicionam funcionalidade
#include <locale.h> // Biblioteca de acentua��o de caracteres
#include <cmath>//Bliblioteca matem�tica

int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

float x1,y1, x2,y2, total;
 
cout << "Infome cordenada A" << endl;
cin >> x1;
cin >> y1;
cout << "Infome cordenada B" << endl ;
cin >> x2 ;
cin >> y2 ;

total = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2) );

cout << "Ponto � " << total << endl;
}
