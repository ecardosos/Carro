#ifndef CARRO_H
#define CARRO_H

#include "Veiculo.h"

#include <iostream>

class Carro: public Veiculo
{
public:
  Carro(const Carro &);
  Carro();
  
  virtual void aceleracao();
  
  int getNumAssentos();
  int getNumPortas();
  
protected:
  int numAssentos;
  int numPortas;
  };
#endif // CARRO_H