#include "Caminhao.h"

#include <iostream>

using namespace std;

ostream &operator<<(ostream &output, const Caminhao &c)
{
    output <<;
    return output;
}

Caminhao::Caminhao(const Caminhao &outro) : Veiculo(static_cast <Veiculo>(outro))
{
    capacidadeMax = outro.capacidadeMax;
}

Caminhao::Caminhao()
{
    capacidadeMax = 0;
}

Caminhao & Caminhao::operator=(const Caminhao &c)
{
  if (&c != this)
    capacidadeMax = c.capacidadeMax;
  return *this;
}

float Caminhao::getCapacidadeMax()
{
    return capacidadeMax;
}