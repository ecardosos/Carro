#ifndef VEICULOTRANSPORTEPASSAGEIROS_H
#define VEICULOTRANSPORTEPASSAGEIROS_H

#include "Veiculo.h"

#include <iostream>

class VeiculoTransportePassageiros : public Veiculo
{
public:
  VeiculoTransportePassageiros(const VeiculoTransportePassageiros &);
  VeiculoTransportePassageiros();

  virtual void aceleracao() = 0;
  virtual void freio() = 0;

  virtual int passageiros();

protected:
  int numPassageiros;
};
#endif // VEICULOTRANSPORTEPASSAGEIROS_H
