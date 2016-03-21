#include "Bicicleta.h"

#include <iostream>

using namespace std;

ostream &operator<<(ostream &output, const Bicicleta &b)
{
  output << "altura do Selim" <<b.alturaSelim;
  return output;
}

Bicicleta::Bicicleta() : alturaSelim(0)
{

}

Bicicleta::Bicicleta(int alturaSelim)
{

}

Bicicleta::Bicicleta(const Bicicleta &outro)
{
  alturaSelim = outro.alturaSelim;
}

Bicicleta & Bicicleta::operator=(const Bicicleta &b)
{
  if (&b != this)
  {
    alturaSelim = b.alturaSelim;
  }

  return *this;
}

void Bicicleta::aceleracao()
{

}

void Bicicleta::freio()
{
  velocidade = 0;
}

int Bicicleta::selim()
{
  return alturaSelim;
}