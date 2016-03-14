#ifndef CAMINHAO_H
#define CAMINHAO_H

#include "Veiculo.h"

class Caminhao: public Veiculo
{
  friend std::ostream &operator<<(std::ostream &output, const Caminhao &c);
  
public:
  Caminhao();  
  Caminhao(const Caminhao &);
  
  Caminhao & operator=(const Caminhao &c);
  
  float getCapacidadeMax();
  
private:
  float capacidadeMax;
  };
#endif // CAMINHAO_H