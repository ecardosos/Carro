#include "Veiculo.h"

#include <string>

using namespace std;

const string Veiculo::verInjecaoEletronica = "VEHICLE.1.0";

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

float Veiculo::getVelocidade()
{
  return velocidade;
}

void Veiculo::setDono(Pessoa* nome)
{
  dono = nome;
}
