#include "VeiculoTransporteCarga.h"

#include <iostream>

using namespace std;

ostream &operator<<(ostream &output, const VeiculoTransporteCarga &v)
{
  output << "capacidade máxima:" << v.capacidadeMax
         << "comprimento:" << v.compr;
  return output;
}

VeiculoTransporteCarga::VeiculoTransporteCarga(const VeiculoTransporteCarga &outro) : Veiculo(static_cast <Veiculo>(outro))
{
  capacidadeMax = outro.capacidadeMax;
  compr = outro.compr;
}

VeiculoTransporteCarga::VeiculoTransporteCarga()
{
  capacidadeMax = 0;
  compr = 0;
}

VeiculoTransporteCarga & VeiculoTransporteCarga::operator=(const VeiculoTransporteCarga &v)
{
  static_cast <Veiculo>(v);
  if (&v != this)
  {
    capacidadeMax = v.capacidadeMax;
    compr = v.compr;
  }
  return *this;
}

float VeiculoTransporteCarga::capacidade()
{
  return capacidadeMax;
}

float VeiculoTransporteCarga::comprimento()
{
  return compr;
}