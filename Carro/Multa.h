#ifndef MULTA_H
#define MULTA_H

#include "Data.h"

#include <string>

class Multa
{
public:
  Multa();
  Multa(Data d, std::string desc, float v);
  Multa(const Multa& m);

  Data getDataInfracao();
  std::string getDescricao();
  float getValor();

private:
  Data dataInfracao;
  std::string descricao;
  float valor;
};

#endif // MULTA_H