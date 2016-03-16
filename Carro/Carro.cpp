#include "Carro.h"

#include <iostream>

using namespace std;

Carro::Carro(const Carro &outro) : Veiculo(static_cast <Veiculo>(outro))
{
  numAssentos = outro.numAssentos;   
}

Carro::Carro()
{
    numAssentos = 0;
}

void Carro::aceleracao()
{
  if(velocidade >= velocidadeMax)
    cout<< atingiu a velocidade máxima!;
  else
    velocidade += 5;
}

int Carro::getNumAssentos()
{
  return numAssentos;
}