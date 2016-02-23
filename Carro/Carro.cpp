#include "Carro.h"

#include <string>
#include <iostream>

using namespace std;

const string Carro::verInjecaoEletronica = "CAR.1.0";

Carro::Carro(const Carro &outroCarro)
{
  velocidade = outroCarro.velocidade;
}

void Carro::aceleracao()
{
  velocidade += 5;
}

void Carro::freio()
{
  velocidade -= 5;
}

int Carro::getVelocidade()
{
  return velocidade;
}

void setMotorista(Pessoa* nome)
{
  motorista = nome;
}

void setDono(Pessoa* nome)
{
  dono = nome;
}