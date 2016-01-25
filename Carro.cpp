#include "Carro.h"

Carro::Carro()
{
}

Carro::~Carro()
{
}

double aceleracao()
	{
		return (torqueroda / raioroda)/massa;
	}
	
void decidirCor()
	{
		cout << "Digite a cor que deseja: ";
		cin >> cor;
	}

