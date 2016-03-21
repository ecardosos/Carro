#ifndef CARRO_H
#define CARRO_H

#include "VeiculoTransportePassageiros.h"

#include <iostream>

class Carro: public VeiculoTransportePassageiros
{
  friend std::ostream &operator<<(std::ostream &output, const Carro &c);
  
public:
  Carro();
  Carro(int numPortas);
  Carro(const Carro &);
  
  Carro & operator=(const Carro &c);
  
  virtual void aceleracao();
  virtual void freio();

  int portas();
  
private:
  int numPortas;
  };
#endif // CARRO_H