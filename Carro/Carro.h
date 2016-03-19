#ifndef CARRO_H
#define CARRO_H

#include "VeiculoTransportePassageiros.h"

#include <iostream>

class Carro: public VeiculoTransportePassageiros
{
  friend std::ostream &operator<<(std::ostream &output, const Carro &c);
  
public:
  Carro(const Carro &);
  Carro();
  
  Carro & operator=(const Carro &c);
  

  int portas();
  
private:
  int numPortas;
  };
#endif // CARRO_H