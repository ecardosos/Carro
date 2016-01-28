#include <string>
#include <iostream>
#include "Carro.h"

using std::cout;

Carro::Carro()
{
	velocidade = 0;
	
}

Carro::~Carro()
{
}

void aceleracao()
	{
		velocidade += 5;
	}

void freio()
	{
		velocidade -= 5;
	}
	
string decidirCor()
	{
		cout << "Digite a cor que deseja: ";
		cin >> cor;
	}

