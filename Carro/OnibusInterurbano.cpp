#include "OnibusInterurbano.h"

#include <iostream>

using namespace std;

ostream &operator<<(ostream &output, const OnibusInterurbano &o)
{
  output << "número de assentos:" << o.numAssentos;

  return output;
}

OnibusInterurbano::OnibusInterurbano() : numAssentos(0)
{

}

OnibusInterurbano::OnibusInterurbano(int numAssent)
{
  numAssentos = numAssent;
}

OnibusInterurbano::OnibusInterurbano(const OnibusInterurbano &outro)
{
  numAssentos = outro.numAssentos;
}

void OnibusInterurbano::aceleracao()
{
  if (velocidade >= velocidadeMax)
    cout << "atingiu a velocidade máxima!" << endl;
  else
    velocidade += 5;
}

void OnibusInterurbano::freio()
{
  if (velocidade > 0)
    velocidade -= 5;
}

OnibusInterurbano & OnibusInterurbano::operator=(const OnibusInterurbano &o)
{
  if (&o != this)
  {
    numAssentos = o.numAssentos;
  }

  return *this;
}

int OnibusInterurbano::getCapacidade()
{
  return numAssentos;
}