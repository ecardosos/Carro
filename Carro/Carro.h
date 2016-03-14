#ifndef CARRO_H
#define CARRO_H

#include "Veiculo.h"

#include <iostream>

class Carro: public Veiculo
{
  friend std::ostream &operator<<(std::ostream &output, const Carro &c);
  
public:
  Carro();
  int getNumAssentos();
  
private:
  int numAssentos;
  };
#endif // CARRO_H