#ifndef VEICULOTRANSPORTECARGA_H
#define VEICULOTRANSPORTECARGA_H

#include "Veiculo.h"

class VeiculoTransporteCarga : public Veiculo
{
public:
  VeiculoTransporteCarga(const VeiculoTransporteCarga &);
  VeiculoTransporteCarga();

  virtual void aceleracao() = 0;
  virtual void freio() = 0;

  virtual float getCapacidade();
  virtual float getComprimento();

protected:
  float capacidadeMax;
  float compr;
};
#endif //VEICULOTRANSPORTECARGA_H
