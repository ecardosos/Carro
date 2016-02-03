#include <string>
#include <iostream>
#include "Carro.h"

using std::cout;

string Carro::injEleVesion = "1.0";

Carro::Carro(string cor)
{
	velocidade = 0;
	cor = corCarro;
}

Carro::Carro(const Carro &c)
{
    freio = c.freio;
    getVelocidade = c.getVelocidade;
    aceleracao = c.aceleracao;
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
	
string getVelocidade(int velocidade)
	{
		return velocidade;
	}

