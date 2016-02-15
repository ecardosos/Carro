#include "Carro.h"

#include <string>
#include <iostream>

using std::string;

string injEleVesion = "CAR.1.0";

Carro::Carro(const string &corCarro)
{
	cor = corCarro;
	velocidade = 0;
}

Carro::~Carro()
{
}

Carro::Carro(const Carro &outroCarro)
{
    velocidade = outroCarro.velocidade;
    cor = outroCarro.cor;
    injEleVesion = outroCarro.injEleVesion;
}

void aceleracao()
{
	velocidade += 5;
	cout<<"Velocidade: "<<carro01.getVelocidade()<<endl;
}

void freio()
{
	velocidade -= 5;
	cout<<"Velocidade: "<<carro01.getVelocidade()<<endl;
}
	
int getVelocidade()
{
	return velocidade;
}	
