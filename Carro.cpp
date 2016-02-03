#include <string>
#include <iostream>
#include "Carro.h"

using std::cout;

string Carro::injEleVesion = "CAR.1.0";

Carro::Carro(const string &corr)
{
	velocidade = 0;
	cor = corr;
}

Carro::Carro(const Carro &outroCarro)
{
    velocidade = outroCarro.velocidade;
    cor = outroCarro.cor;
    injEleVesion = outroCarro.injEleVesion;
}

void Carro::aceleracao()
	{
		velocidade += 5;
	}

void Carro::freio()
	{
		velocidade -= 5;
	}
	
int Carro::getVelocidade(int veloc)
	{
		return veloc;
	}

