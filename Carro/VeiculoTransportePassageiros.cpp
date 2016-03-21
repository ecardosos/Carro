#include "VeiculoTransportePassageiros.h"

using namespace std;

VeiculoTransportePassageiros::VeiculoTransportePassageiros(const VeiculoTransportePassageiros &outro)
{
  numPassageiros = outro.numPassageiros;
}

VeiculoTransportePassageiros::VeiculoTransportePassageiros()
{
  numPassageiros = 0;
}

int VeiculoTransportePassageiros::passageiros()
{
  return numPassageiros;
}