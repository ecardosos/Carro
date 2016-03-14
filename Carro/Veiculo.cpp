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

Veiculo::Veiculo(const Veiculo &outro)
{
  velocidade = outro.velocidade;
  cor = outro.cor;
  velocidadeMax = outro.velocidadeMax;
  dono = new Pessoa;
  *dono = *outro.dono;
}

Veiculo::Veiculo(string cor, float velocidadeMax)
{
  velocidade = 0;
}

Veiculo::Veiculo()
{
    velocidade = 0;
    velocidadeMax = 0;
    cor = "";
}

Veiculo & Veiculo::operator=(const Veiculo &v)
{
  if (&v != this)
    velocidade = v.velocidade;
    velocidadeMax = v.velocidadeMax;
    cor = v.cor;
    delete[] dono;
    *dono = *v.dono;
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

bool Veiculo::operator==(const Veiculo &v)
{
  if(velocidade != v.velocidade && cor != v.cor && dono != v.dono)
      return false;

  return true;
}