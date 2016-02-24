#include "Carro.h"

#include <string>
#include <iostream>

using namespace std;

const string Carro::verInjecaoEletronica = "CAR.1.0";

Carro::Carro(const Carro &outroCarro)
{
  velocidade = outroCarro.velocidade;
  cor = outroCarro.cor;
  motorista = outroCarro.motorista;
  dono = outroCarro.dono;
}

Carro::Carro(string cor)
{
  velocidade = 0;
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

void Carro::setMotorista(Pessoa* nome)
{
  motorista = nome;
}

void Carro::setDono(Pessoa* nome)
{
  dono = nome;
}

void Carro::setDataLicenciamento(Data* data)
{
  dataLicenciamento = data;
}

Carro & operator=(const Carro &c)
{
  if(&c != this)
      velocidade = c.velocidade;

  return this;
}

bool operator==(const Carro &c)
{
  if(velocidade != c.velocidade)
      return false;
  
  if(velocidade == c.velocidade)
      return true;
}