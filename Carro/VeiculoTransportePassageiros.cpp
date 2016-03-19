#include "VeiculoTransportePassageiros.h"

#include <iostream>

using namespace std;

ostream &operator<<(ostream &output, const VeiculoTransportePassageiros &v)
{
  output << "número de passageiros" << v.numPassageiros;
  return output;
}

VeiculoTransportePassageiros::VeiculoTransportePassageiros(const VeiculoTransportePassageiros &outro) : Veiculo(static_cast <Veiculo>(outro))
{
  numPassageiros = outro.numPassageiros;
}

VeiculoTransportePassageiros::VeiculoTransportePassageiros()
{
  numPassageiros = 0;
}

VeiculoTransportePassageiros & VeiculoTransportePassageiros::operator=(const VeiculoTransportePassageiros &v)
{
  static_cast <Veiculo>(v);
  if (&v != this)
  {
    numPassageiros = v.numPassageiros;
  }

  return *this;
}

int VeiculoTransportePassageiros::passageiros()
{
  return numPassageiros;
}