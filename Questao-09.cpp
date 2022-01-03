#include <iostream>//biblioteca de arquivos de cabeçalho
using namespace std;//Arquivos de cabeçalho adicionam funcionalidade
#include <locale.h> // Biblioteca de acentuação de caracteres


int main() {
	setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão

float p = 10 ,m = 12, g = 15, qtdP, qtdM, qtdG,total;
 
cout << "Infome quantidade de camisa P vendidas" << endl;
cin >> qtdP;
cout << "Infome quantidade de camisa M vendidas" << endl;
cin >> qtdM;
cout << "Infome quantidade de camisa G vendidas" << endl;
cin >> qtdG;

total = (p*qtdP) + (m*qtdM) + (g*qtdG);
cout << "Você arrecadou " << total << " Reais" << endl;
}
