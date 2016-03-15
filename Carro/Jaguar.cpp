#include "Jaguar.h"

#include <iostream>

using namespace std;

ostream &operator<<(ostream &output, const Jaguar &j)
{
    output <<;
    return output;
}

Jaguar::Jaguar()
{
    acOnOff = false;
    travaOnOff = false;
}

Jaguar::Jaguar(const Jaguar &outro) : Carro(static_cast<Carro>(outro))
{
  acOnOff = outro.acOnOff;
  travaOnOff = outro.travaOnOff;
}

Jaguar & Jaguar::operator=(const Jaguar &j)
{
  if (&j != this)
    acOnOff = j.acOnOff;
    travaOnOff = j.travaOnOff;
  return *this;
}

void setArCondicionadoOn(bool onOff)
{
    acOnOff = true;
}

bool getArCondicionadoOn()
{
    return acOnOff;
}