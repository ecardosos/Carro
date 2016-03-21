#ifndef VEICULOTRANSPORTECARGA_H
#define VEICULOTRANSPORTECARGA_H

#include "Veiculo.h"

#include <iostream>

class VeiculoTransporteCarga : public Veiculo
{
public:
  VeiculoTransporteCarga(const VeiculoTransporteCarga &);
  VeiculoTransporteCarga();

  virtual void aceleracao() = 0;
  virtual void freio() = 0;

  virtual float capacidade();
  virtual float comprimento();

protected:
  float capacidadeMax;
  float compr;
};
#endif //VEICULOTRANSPORTECARGA_H
