#include "Caminhao.h"

#include <iostream>

using namespace std;

ostream &operator<<(ostream &output, const Caminhao &c)
{
  output << "capacidade máxima:" << c.numContainers;
  return output;
}

Caminhao::Caminhao(const Caminhao &outro) : VeiculoTransporteCarga(static_cast <VeiculoTransporteCarga>(outro))
{
  numContainers = outro.numContainers;
}

Caminhao::Caminhao()
{
  numContainers = 0;
}

Caminhao & Caminhao::operator=(const Caminhao &c) 
{
  static_cast <VeiculoTransporteCarga>(c);
  if (&c != this)
  {
    numContainers = c.numContainers;
  }
  return *this;
}

int Caminhao::containers()
{
  return numContainers;
}