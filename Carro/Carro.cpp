#include "Carro.h"

#include <iostream>

using namespace std;

ostream &operator<<(ostream &output, const Carro &c)
{
  output << "número de portas" << c.numPortas;
  return output;
}

Carro::Carro() : numPortas(0)
{

}
Carro::Carro(int numPortas)
{

}

Carro::Carro(const Carro &outro)
{
  numPortas = outro.numPortas;
}

void Carro::aceleracao()
{
  if (velocidade >= velocidadeMax)
    cout << "atingiu a velocidade máxima!" << endl;
  else
    velocidade += 5;
}

void Carro::freio()
{
  if (velocidade > 0)
    velocidade -= 5;
}

Carro & Carro::operator=(const Carro &c)
{
  if (&c != this)
  {
    numPortas = c.numPortas;
  }

  return *this;
}

int Carro::portas()
{
  return numPortas;
}