#include "Carro.h"

#include <string>
#include <iostream>

using namespace std;

const string Carro::verInjecaoEletronica = "CAR.1.0";

Carro::Carro(const Carro &outroCarro)
{
  velocidade = outroCarro.velocidade;
  cor = outroCarro.cor;
  dono = new Pessoa;
  *dono = *outroCarro.dono;
}

Carro::Carro(Pessoa* d, Registro* r, string c) : dono(d),
                                                 registro(r),
                                                 cor(cor)
{
  velocidade = 0;
}

Carro & Carro::operator=(const Carro &c)
{
  if (&c != this)
  {
    velocidade = c.velocidade;
    cor = c.cor;

    delete[] dono;
    *dono = *c.dono;
  }

  return *this;
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

void Carro::setDono(Pessoa* nome)
{
  dono = nome;
}

bool Carro::operator==(const Carro &c)
{ 
  if(velocidade != c.velocidade && cor != c.cor && dono != c.dono)
      return false;

  return true;
}