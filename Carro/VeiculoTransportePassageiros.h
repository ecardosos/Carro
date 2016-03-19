#ifndef VEICULOTRANSPORTEPASSAGEIROS_H
#define VEICULOTRANSPORTEPASSAGEIROS_H

#include "Veiculo.h"

#include <iostream>

class VeiculoTransportePassageiros : public Veiculo
{
  friend std::ostream &operator<<(std::ostream &output, const VeiculoTransportePassageiros &v);

public:
  VeiculoTransportePassageiros(const VeiculoTransportePassageiros &);
  VeiculoTransportePassageiros();

  VeiculoTransportePassageiros & operator=(const VeiculoTransportePassageiros &v);

  int passageiros();

private:
  int numPassageiros;
};
#endif // VEICULOTRANSPORTEPASSAGEIROS_H
