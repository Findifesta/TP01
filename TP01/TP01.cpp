#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil.1252");

	string nome = "";
	float p1, p2, media;

	cout << "Calculo de média de alunos.\n";
	cout << "===================\n";



	cout << "Insira o nome do aluno:\n";
	cin >> nome;

	cout << "Insira um valor válido para a nota da P1:\n";
	cin >> p1;
	if (p1 < 0 || p1 > 10) {
		cout << "O valor " << p1 << " é inválido. Reinicie o programa e insira uma nota de 0 a 10";
		return 0;
	}

	cout << "Insira a nota da P2:\n";
	cin >> p2;
	if (p2 < 0 || p2 > 10) {
		cout << "O valor " << p2 << " é inválido. Reinicie o programa e insira uma nota de 0 a 10";
		return 0;
	}

	media = (p1 + p2) / 2;

	cout << "A media de " << nome << " foi de " << media << endl;

	if (media >= 6) {
		cout << nome << " foi aprovado!" << endl;
	}
	else {
		cout << nome << " foi reprovado!" << endl;
	}
}