#include "VeiculoTransporteCarga.h"

using namespace std;

VeiculoTransporteCarga::VeiculoTransporteCarga(const VeiculoTransporteCarga &outro)
{
  capacidadeMax = outro.capacidadeMax;
  compr = outro.compr;
}

VeiculoTransporteCarga::VeiculoTransporteCarga()
{
  capacidadeMax = 0;
  compr = 0;
}

float VeiculoTransporteCarga::capacidade()
{
  return capacidadeMax;
}

float VeiculoTransporteCarga::comprimento()
{
  return compr;
}