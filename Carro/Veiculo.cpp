#include "Veiculo.h"

#include <iostream>
#include <string>

using namespace std;

const string Veiculo::verInjecaoEletronica = "VEHICLE.1.0";

ostream &operator<<(ostream &output, const Veiculo &v)
{
    output <<;
    return output;
}

Veiculo::Veiculo(const Veiculo &outroCarro)
{
  velocidade = outroCarro.velocidade;
  cor = outroCarro.cor;
  velocidadeMax = outroCarro.velocidadeMax;
  dono = new Pessoa;
  *dono = *outroCarro.dono;
}

Veiculo::Veiculo(string cor, float velocidadeMax)
{
  velocidade = 0;
}

Veiculo & Veiculo::operator=(const Veiculo &c)
{
  if (&c != this)
    velocidade = c.velocidade;
  return *this;
}

void Veiculo::aceleracao()
{
  if(velocidade >= velocidadeMax)
    cout<< atingiu a velocidade máxima!;
  else
    velocidade += 5;
}

void Veiculo::freio()
{
  velocidade -= 5;
}

int Veiculo::getVelocidade()
{
  return velocidade;
}

void Veiculo::setMotorista(Pessoa* nome)
{
  motorista = nome;
}

void Veiculo::setDono(Pessoa* nome)
{
  dono = nome;
}

bool Veiculo::operator==(const Veiculo &c)
{
  if(velocidade != c.velocidade)
      return false;
  
  if(velocidade == c.velocidade)
      return true;
}