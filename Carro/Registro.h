#ifndef REGISTRO_H
#define REGISTRO_H

#include "Data.h"

#include <string>

class Registro
{
public:
  Registro();
  Registro(Data d, std::string p);

  void setDataLicenciamento(int dia, int mes, int ano);
  void setPlaca(std::string p);

private:
  std::string placa;
  Data dataLicenciamento;
};
#endif // REGISTRO
