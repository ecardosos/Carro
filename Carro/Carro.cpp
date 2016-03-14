#include "Carro.h"

#include <iostream>

using namespace std;

ostream &operator<<(ostream &output, const Carro &c)
{
    output << "número de assentos:" << numAssentos;
    return output;
}

Carro::Carro(const Carro &outro) : Veiculo(static_cast <Veiculo>(outro))
{
 numAssentos = outro.numAssentos;   
}

Carro::Carro()
{
    numAssentos = 0;
}

Carro & Carro::operator=(const Carro &c)
{
  if (&c != this)
    numAssentos = c.numAssentos;
  return *this;
}

int Carro::getNumAssentos()
{
    return numAssentos;
}