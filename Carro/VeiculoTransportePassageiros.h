#ifndef VEICULOTRANSPORTEPASSAGEIROS_H
#define VEICULOTRANSPORTEPASSAGEIROS_H

#include "Veiculo.h"

class VeiculoTransportePassageiros : public Veiculo
{
public:
  VeiculoTransportePassageiros(const VeiculoTransportePassageiros &);
  VeiculoTransportePassageiros();

  virtual void aceleracao() = 0;
  virtual void freio() = 0;

  virtual int getCapacidade() = 0;

  virtual int getPassageiros();

protected:
  int numPassageiros;
};
#endif // VEICULOTRANSPORTEPASSAGEIROS_H
