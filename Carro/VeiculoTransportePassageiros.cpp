#include "VeiculoTransportePassageiros.h"

using namespace std;

VeiculoTransportePassageiros::VeiculoTransportePassageiros(const VeiculoTransportePassageiros &outro)
{
  numPassageiros = outro.numPassageiros;
  origem = outro.origem;
  destino = outro.destino;
}

VeiculoTransportePassageiros::VeiculoTransportePassageiros()
{
  numPassageiros = 0;
  origem = "";
  destino = "";
}

int VeiculoTransportePassageiros::getPassageiros()
{
  return numPassageiros;
}