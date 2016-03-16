#include "Veiculo.h"

#include <iostream>
#include <string>

using namespace std;

const string Veiculo::verInjecaoEletronica = "VEHICLE.1.0";

ostream &operator<<(ostream &output, const Veiculo &v)
{
    output  << "Velocidade Máxima:" << velocidadeMax
            << "Velocidade atual:" << velocidade
            << "Cor do carro:" << cor
            << "Dono do Carro:" << &dono;
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
    dono = NULL;
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