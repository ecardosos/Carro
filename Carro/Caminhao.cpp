#include "Caminhao.h"

#include <iostream>

using namespace std;

ostream &operator<<(ostream &output, const Caminhao &c)
{
  output << "capacidade máxima:" << c.numContainers;
  return output;
}

Caminhao::Caminhao() : numContainers(0)
{

}

Caminhao::Caminhao(int numContainers)
{

}

Caminhao::Caminhao(const Caminhao &outro)
{
  numContainers = outro.numContainers;
}

Caminhao & Caminhao::operator=(const Caminhao &c) 
{
  if (&c != this)
  {
    numContainers = c.numContainers;
  }
  return *this;
}

void Caminhao::aceleracao()
{
  velocidade += 3;
}
void Caminhao::freio()
{
  velocidade -= 3;
}

int Caminhao::containers()
{
  return numContainers;
}