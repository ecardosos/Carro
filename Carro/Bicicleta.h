#ifndef BICICLETA_H
#define BICICLETA_H

#include "VeiculoTransportePassageiros.h"

#include <iostream>

class Bicicleta : public VeiculoTransportePassageiros
{
  friend std::ostream &operator<<(std::ostream &output, const Bicicleta &b);

public:
  Bicicleta();
  Bicicleta(int alturaSelim);
  Bicicleta(const Bicicleta &);

  Bicicleta & operator=(const Bicicleta &b);

  virtual void aceleracao();
  virtual void freio();
  int selim();

private:
  int alturaSelim;
};
#endif // BICICLETA_H
