#ifndef CAMINHAO_H
#define CAMINHAO_H

#include "VeiculoTransporteCarga.h"

class Caminhao: public VeiculoTransporteCarga
{
  friend std::ostream &operator<<(std::ostream &output, const Caminhao &c);

public:
  Caminhao();
  Caminhao(int numContainers);
  Caminhao(const Caminhao &);
  
  Caminhao & operator=(const Caminhao &c);

  virtual void aceleracao();
  virtual void freio();
  int containers();

private:
  int numContainers;
  };
#endif // CAMINHAO_H