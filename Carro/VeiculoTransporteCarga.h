#ifndef VEICULOTRANSPORTECARGA_H
#define VEICULOTRANSPORTECARGA_H

#include "Veiculo.h"

#include <iostream>

class VeiculoTransporteCarga : public Veiculo
{
  friend std::ostream &operator<<(std::ostream &output, const VeiculoTransporteCarga &v);

public:
  VeiculoTransporteCarga(const VeiculoTransporteCarga &);
  VeiculoTransporteCarga();

  VeiculoTransporteCarga & operator=(const VeiculoTransporteCarga &v);

  float capacidade();
  float comprimento();

private:
  float capacidadeMax;
  float compr;
};
#endif //VEICULOTRANSPORTECARGA_H
