#ifndef CAMINHAO_H
#define CAMINHAO_H

#include "VeiculoTransporteCarga.h"

class Caminhao: public VeiculoTransporteCarga
{
  friend std::ostream &operator<<(std::ostream &output, const Caminhao &c);

public:
  Caminhao();  
  Caminhao(const Caminhao &);
  
  Caminhao & operator=(const Caminhao &c);
  
  int containers();

private:
  int numContainers;
  };
#endif // CAMINHAO_H