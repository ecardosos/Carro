#include "Carro.h"

#include <iostream>

using namespace std;

ostream &operator<<(ostream &output, const Carro &c)
{
  output << "número de portas" << c.numPortas;
  return output;
}

Carro::Carro(const Carro &outro) : VeiculoTransportePassageiros(static_cast <VeiculoTransportePassageiros>(outro))
{
  numPortas = outro.numPortas;
}

Carro::Carro()
{
   numPortas = 0;
}

Carro & Carro::operator=(const Carro &c)
{
  static_cast <VeiculoTransportePassageiros>(c);
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