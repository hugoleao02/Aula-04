#include <iostream>//biblioteca de arquivos de cabe�alho
using namespace std;//Arquivos de cabe�alho adicionam funcionalidade
#include <locale.h> // Biblioteca de acentua��o de caracteres


int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo portugu�s como linguagem padr�o

float p = 10 ,m = 12, g = 15, qtdP, qtdM, qtdG,total;
 
cout << "Infome quantidade de camisa P vendidas" << endl;
cin >> qtdP;
cout << "Infome quantidade de camisa M vendidas" << endl;
cin >> qtdM;
cout << "Infome quantidade de camisa G vendidas" << endl;
cin >> qtdG;

total = (p*qtdP) + (m*qtdM) + (g*qtdG);
cout << "Voc� arrecadou " << total << " Reais" << endl;
}
