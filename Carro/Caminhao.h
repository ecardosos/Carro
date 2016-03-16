#ifndef CAMINHAO_H
#define CAMINHAO_H

#include "Veiculo.h"

class Caminhao: public Veiculo
{
public:
  Caminhao();  
  Caminhao(const Caminhao &);
  
  float getCapacidadeMax();
  
protected:
  float capacidadeMax;
  };
#endif // CAMINHAO_H